# 数据流测试

所有测试均满足全定义-使用路径准则。
即：单元测试的用例覆盖每个定义节点到所有使用节点以及后续节点的定义清除路径。包括有一次环路和或无环路的路径。

### search()

```java
public V search(K key) {
    return root.getValue(key);
}
```
其中，root的类可能有两种情况：
```java
// Internal Node
V getValue(K key) {
    return getChild(key).getValue(key);
}
```

```java
// Leaf Node
V getValue(K key) {
    int loc = Collections.binarySearch(keys, key);
    return loc >= 0 ? values.get(loc) : null;
}
```
`search()`中只涉及变量`key`，并且在整个过程中没有重新赋值。
因此，从函数调用开始到任意一个使用`key`的语句`(60, 198, 275, 329)`，均为定义清除路径。
```
// 省略了顺序执行的语句部分
p1 = <invoke, 60, 329> (root为叶子节点)
p2 = <invoke, 60, 198, 275, 329> (root不为叶子节点)
p3 = <invoke, 60, 198, 275, 198, 275, 329> (一次环路, 即B+树需要找到child的child)
```

### searchRange()

```java
public List<V> searchRange(K key1, RangePolicy policy1, K key2, RangePolicy policy2) {
    return root.getRange(key1, policy1, key2, policy2);
}
```

`searchRange()`中传入了变量`key1`、`key2`、`policy1`和`policy2`。
和`search()`类似，这些传入的变量都不会被重新赋值。
`policy1`和`policy2`共享路径：
```
p1 = <invoke, 83, 372> (root为叶子节点)
p2 = <invoke, 83, 238, 372> (root不为叶子节点)
```

`key1`路径：
```
p1 = <invoke, 83, 370>
p2 = <invoke, 83, 238, 275, 370>
p3 = <invoke, 83, 238, 275, 238, 275, 370>
```

`key2`路径：
```
p1 = <invoke, 83, 371>
p2 = <invoke, 83, 238, 371>
```

和`search()`类似，只需要构造一个深度为3的B+树即可覆盖所有路径。
在`LeafNode.getRange`中，有临时变量`kIt`/`vIt`/`result`存在分支情况（其他均为顺序执行，不需要过多考虑），因此需要对两个while循环进行分支测试以覆盖这三个变量的定义清除路径。

### insert()

```java
public void insert(K key, V value) {
    root.insertValue(key, value);
    if (root.isOverflow()) {
        Node sibling = root.split();
        InternalNode newRoot = new InternalNode();
        newRoot.keys.add(sibling.getFirstLeafKey());
        newRoot.children.add(root);
        newRoot.children.add(sibling);
        root = newRoot;
    }
}

// Internal Node
void insertValue(K key, V value) {
    Node child = getChild(key);
    child.insertValue(key, value);
    if (child.isOverflow()) {
        Node sibling = child.split();
        insertChild(sibling.getFirstLeafKey(), sibling);
    }
}

// Leaf Node
void insertValue(K key, V value) {
    int loc = Collections.binarySearch(keys, key);
    int valueIndex = loc >= 0 ? loc : -loc - 1;
    if (loc >= 0) {
        values.set(valueIndex, value);
    } else {
        keys.add(valueIndex, key);
        values.add(valueIndex, value);
    }
}
```

`key`路径：
```
p1 = <invoke, 97, 349>
p2 = <invoke, 97, 223, 349>
```

`value`路径：
```
p1 = <invoke, 97, 347> (插入相同的key)
p2 = <invoke, 97, 350>
p3 = <invoke, 97, 223, 347>
p4 = <invoke, 97, 223, 350>
```

`InternalNode.InsertValue.child`路径：
```
p1 = <222, 223, 224>
p2 = <222, 223, 224, 225>
```

`InternalNode.InsertValue.sibling`路径：
```
p1 = <225, 226, 292>
p2 = <225, 226, 295>
```

`insert.newRoot`路径：
```
p1 = <100, 104>
```

只需要构造一个让root split一次，并且让child再split一次的测试即可覆盖全部路径。实际上，在上两个测试中已经对这些路径进行了覆盖。

### delete()

```java
public void delete(K key) {
    root.deleteValue(key);
    Node left;
    Node rootLeftSibling;
    Node child;
    if (root instanceof BPlusTree.InternalNode && root.keyNumber() == 0){
        rootLeftSibling = ((InternalNode) root).getChildLeftSibling(key);
        child = ((InternalNode) root).getChild(key);
        left = rootLeftSibling != null ? rootLeftSibling : child;
        root = left;
    }
}

// Internal Node
void deleteValue(K key) {
    Node child = getChild(key);
    child.deleteValue(key);
    if (child.isUnderflow()) {
        Node childLeftSibling = getChildLeftSibling(key);
        Node childRightSibling = getChildRightSibling(key);
        Node left = childLeftSibling != null ? childLeftSibling : child;
        Node right = childLeftSibling != null ? child : childRightSibling;
        left.merge(right);
        deleteChild(right.getFirstLeafKey());
        if (left.isOverflow()) {
            Node sibling = left.split();
            insertChild(sibling.getFirstLeafKey(), sibling);
        }
    }
}

// Leaf Node
void deleteValue(K key) {
    int loc = Collections.binarySearch(keys, key);
    if (loc >= 0) {
        keys.remove(loc);
        values.remove(loc);
    }
}
```

`key`路径：
```
p1 = <115, 335>
p2 = <115, 204, 335> （root是Internal Node）
p3 = <115, 204, 335, 206, 300, 207, 309> （merge 以后子节点 overflow）
p4 = <115, 204, 335, 120, 300, 275> （root被删除到只有一个分支）
```

`InternalNode.deleteValue.left`路径：
```
p1 = <208, 244> (merge)
p2 = <211, 213>
```

其余的的变量均为顺序执行，只需要进入分支即可覆盖所有定义清除路径。

覆盖路径只需要创建一个深度为3的B+树，并插满子节点（保证child可以overflow），然后从大到小依次删除即可覆盖全部定义清除路径。

### Result

Class Coverage: 5/5 (100%)
Method Coverage: 37/37 (100%)
Line Coverage: 171/175 (97%)
(部分return null的语句没有覆盖到)