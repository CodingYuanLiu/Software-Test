package com.jgfanng.algo;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import com.sun.xml.internal.ws.policy.AssertionSet;
import org.junit.Assert;
import org.junit.Test;

import java.util.List;

public class BPlusTreeTest {
	@Test
	public void test() {
		BPlusTree<Integer, String> bpt = new BPlusTree<Integer, String>(4);
		bpt.insert(0, "a");
		bpt.insert(1, "b");
		bpt.insert(2, "c");
		bpt.insert(3, "d");
		bpt.insert(4, "e");
		bpt.insert(5, "f");
		bpt.insert(6, "g");
		bpt.insert(7, "h");
		bpt.insert(8, "i");
		bpt.insert(9, "j");
		bpt.delete(1);
		bpt.delete(3);
		bpt.delete(5);
		bpt.delete(7);
		bpt.delete(9);
		Assert.assertEquals(bpt.search(0), "a");
		Assert.assertEquals(bpt.search(1), null);
		Assert.assertEquals(bpt.search(2), "c");
		Assert.assertEquals(bpt.search(3), null);
		Assert.assertEquals(bpt.search(4), "e");
		Assert.assertEquals(bpt.search(5), null);
		Assert.assertEquals(bpt.search(6), "g");
		Assert.assertEquals(bpt.search(7), null);
		Assert.assertEquals(bpt.search(8), "i");
		Assert.assertEquals(bpt.search(9), null);
	}

	@Test
	public void testSearchRange() {
		BPlusTree<Integer, String> bpt = new BPlusTree<Integer, String>(4);
		bpt.insert(0, "a");
		bpt.insert(1, "b");
		bpt.insert(2, "c");
		bpt.insert(3, "d");
		bpt.insert(4, "e");
		bpt.insert(5, "f");
		bpt.insert(6, "g");
		bpt.insert(7, "h");
		bpt.insert(8, "i");
		bpt.insert(9, "j");
		Assert.assertArrayEquals(
				bpt.searchRange(3, RangePolicy.EXCLUSIVE, 7,
						RangePolicy.EXCLUSIVE).toArray(), new String[] { "e",
						"f", "g" });
		Assert.assertArrayEquals(
				bpt.searchRange(3, RangePolicy.INCLUSIVE, 7,
						RangePolicy.EXCLUSIVE).toArray(), new String[] { "d",
						"e", "f", "g" });
		Assert.assertArrayEquals(
				bpt.searchRange(3, RangePolicy.EXCLUSIVE, 7,
						RangePolicy.INCLUSIVE).toArray(), new String[] { "e",
						"f", "g", "h" });
		Assert.assertArrayEquals(
				bpt.searchRange(3, RangePolicy.INCLUSIVE, 7,
						RangePolicy.INCLUSIVE).toArray(), new String[] { "d",
						"e", "f", "g", "h" });
	}
	@Test
	public void testLeafNode(){
		BPlusTree.LeafNode node = new BPlusTree().new LeafNode();
		Assert.assertNotNull(node.keys);
		Assert.assertNotNull(node.values);
	}

	@Test
	public void testLeafNodeGetValueNotFound() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		Assert.assertNull(node.getValue(1));
	}

	@Test
	public void testLeafNodeGetValueReturnValue() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		Assert.assertNotNull(node.getValue(1));
		Assert.assertEquals(node.getValue(1), 1);
	}

	@Test
	public void testLeafNodeDeleteValueNotFound() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.deleteValue(1);
	}

	@Test
	public void testLeafNodeDeleteValueOk() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		Assert.assertEquals(node.getValue(1), 1);
		node.deleteValue(1);
		Assert.assertNull(node.getValue(1));
	}

	@Test
	public void testLeafNodeInsertValueNotExists() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		Assert.assertNull(node.getValue(1));
		node.insertValue(1, 2);
		Assert.assertEquals(node.getValue(1), 2);
	}

	@Test
	public void testLeafNodeInsertValueExists() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		Assert.assertNull(node.getValue(1));
		node.insertValue(1, 2);
		Assert.assertEquals(node.getValue(1), 2);
		node.insertValue(1, 4);
		Assert.assertEquals(node.getValue(1), 4);
	}

	@Test
	public void testLeafNodeGetFirstLeafKeyNotExists() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		Assert.assertNull(node.getFirstLeafKey());
	}

	@Test
	public void testLeafNodeGetFirstLeafKeyExists() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(2, 1);
		node.insertValue(1, 1);
		Assert.assertEquals(node.getFirstLeafKey(), 1);
	}

	@Test
	public void testLeafNodeGetRangeNotEnterInnerLoop() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		Assert.assertNotNull(node.getRange(1, RangePolicy.EXCLUSIVE, 3, RangePolicy.INCLUSIVE));
		List res = node.getRange(1, RangePolicy.EXCLUSIVE, 3, RangePolicy.INCLUSIVE);
		Assert.assertEquals(res.size(), 0);
	}

	@Test
	public void testLeafNodeGetRangeEnterInnerLoopReturnRes() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 2);
		node.insertValue(3, 4);
		List<Integer> res = node.getRange(1, RangePolicy.EXCLUSIVE, 3, RangePolicy.INCLUSIVE);

		Assert.assertNotNull(res);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 4});
	}

	@Test
	public void testLeafNodeGetRangeEnterInnerLoopReturnRes2() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 2);
		node.insertValue(3, 4);
		node.insertValue(4, 7);
		List<Integer> res = node.getRange(1, RangePolicy.EXCLUSIVE, 3, RangePolicy.INCLUSIVE);
		Assert.assertNotNull(res);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 4});
	}

	@Test
	public void testLeafNodeGetRangeEnterInnerLoopReturnRes3() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 2);
		node.insertValue(3, 4);

		BPlusTree.LeafNode nextnode = new BPlusTree<Integer, Integer>(4).new LeafNode();
		nextnode.insertValue(4, 5);
		nextnode.insertValue(5, 7);
		nextnode.insertValue(6, 9);

		node.next = nextnode;

		List<Integer> res = node.getRange(1, RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertNotNull(res);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 4, 5});
	}

	@Test
	public void testLeafNodeMerge() {

		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 2);
		node.insertValue(3, 4);

		BPlusTree.LeafNode sibling = new BPlusTree<Integer, Integer>(4).new LeafNode();
		sibling.insertValue(4, 1);
		sibling.insertValue(5, 2);
		sibling.insertValue(6, 4);

		node.next = sibling;

		List<Integer> res = node.getRange(1, RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);

		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 4, 1});

		node.merge(sibling);
		Assert.assertNull(node.next);
		res = node.getRange(1,  RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 4, 1});
	}

	@Test
	public void testLeafNodeSplit() {

		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 2);
		node.insertValue(3, 4);
		node.insertValue(4, 5);

		List<Integer> res = node.getRange(1, RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 4, 5});

		BPlusTree.LeafNode sibling;

		sibling = (BPlusTree.LeafNode) node.split();
		Assert.assertNotNull(sibling);
		res = node.getRange(1,  RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 4, 5});

		res = sibling.getRange(1, RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{4, 5});
	}

	@Test
	public void testIsOverflowReturnsTrue() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 2);
		node.insertValue(3, 4);
		node.insertValue(4, 5);
		Assert.assertTrue(node.isOverflow());
	}

	@Test
	public void testIsOverflowReturnsFalse() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 2);
		node.insertValue(3, 4);
		Assert.assertFalse(node.isOverflow());
	}

	@Test
	public void testIsUnderflowReturnsTrue() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		Assert.assertTrue(node.isUnderflow());
	}

	@Test
	public void testIsUnderflowReturnsFalse() {
		BPlusTree.LeafNode node = new BPlusTree<Integer, Integer>(4).new LeafNode();
		node.insertValue(1, 1);
		node.insertValue(2, 1);
		Assert.assertFalse(node.isUnderflow());
	}

	@Test
	public void testBPlusTreeWithArgOk() {
		BPlusTree tree = new BPlusTree(4);
	}

	@Test(expected = IllegalArgumentException.class)
	public void testBPlusTreeWithArgFail() {
		BPlusTree tree = new BPlusTree(1);
	}

	@Test
	public void testBPlusTreeWithNoArgOk() {
		BPlusTree tree = new BPlusTree();
	}

	@Test
	public void testBPlusTreeSearchLeafNodeOk() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.LeafNode);
		Assert.assertEquals(tree.search(1), 1);
	}

	@Test
	public void testBPlusTreeSearchLeafNodeNotFound() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.LeafNode);
		Assert.assertNull(tree.search(2));
	}

	@Test
	public void testBPlusTreeSearchInternalNodeOk() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.InternalNode);
		Assert.assertEquals(tree.search(1), 1);
		Assert.assertEquals(tree.search(2), 2);
		Assert.assertEquals(tree.search(3), 3);
		Assert.assertEquals(tree.search(4), 4);
	}

	@Test
	public void testBPlusTreeSearchInternalNodeNotFound() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.InternalNode);
		Assert.assertNull(tree.search(5));
		Assert.assertNull(tree.search(0));
	}

	@Test
	public void testBPlusTreeSearchRangeLeafNodeOk() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.LeafNode);

		List<Integer> res = tree.searchRange(1, RangePolicy.INCLUSIVE, 3, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{1, 2, 3});

		res = tree.searchRange(1, RangePolicy.EXCLUSIVE, 3, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{ 2, 3});

		res = tree.searchRange(1, RangePolicy.INCLUSIVE, 3, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{1, 2});

		res = tree.searchRange(1, RangePolicy.EXCLUSIVE, 3, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2});
	}

	@Test
	public void testBPlusTreeSearchRangeLeafNodeNotFound() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.LeafNode);

		List<Integer> res = tree.searchRange(4, RangePolicy.INCLUSIVE, 5, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});

		res = tree.searchRange(3, RangePolicy.EXCLUSIVE, 5, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});

		res = tree.searchRange(0, RangePolicy.INCLUSIVE, 1, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});

		res = tree.searchRange(1, RangePolicy.EXCLUSIVE, 2, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});
	}

	@Test
	public void testBPlusTreeSearchRangeInternalNodeOk() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.InternalNode);

		List<Integer> res = tree.searchRange(1, RangePolicy.INCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{1, 2, 3, 4});

		res = tree.searchRange(1, RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{ 2, 3, 4});

		res = tree.searchRange(1, RangePolicy.INCLUSIVE, 4, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{1, 2, 3});

		res = tree.searchRange(1, RangePolicy.EXCLUSIVE, 4, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{2, 3});
	}

	@Test
	public void testBPlusTreeSearchRangeInternalNodeNotFound() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertNotNull(tree.root);
		Assert.assertTrue(tree.root instanceof BPlusTree.InternalNode);

		List<Integer> res = tree.searchRange(5, RangePolicy.INCLUSIVE, 6, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});

		res = tree.searchRange(4, RangePolicy.EXCLUSIVE, 4, RangePolicy.INCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});

		res = tree.searchRange(1, RangePolicy.INCLUSIVE, 1, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});

		res = tree.searchRange(4, RangePolicy.EXCLUSIVE, 5, RangePolicy.EXCLUSIVE);
		Assert.assertArrayEquals(res.toArray(), new Integer[]{});
	}

	@Test
	public void testBPlusTreeInsertNoOverflow() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		Assert.assertEquals(tree.search(1), 1);
	}

	@Test
	public void testBPlusTreeInsertLeafNodeOverflow() {
		BPlusTree tree = new BPlusTree(4);
		Assert.assertTrue(tree.root instanceof BPlusTree.LeafNode);
		tree.insert(1, 1);
		Assert.assertEquals(tree.search(1), 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertTrue(tree.root instanceof BPlusTree.InternalNode);
		Assert.assertEquals(tree.search(4), 4);
	}

	@Test
	public void testBPlusTreeInsertInternalNodeOverflow() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertTrue(tree.root instanceof BPlusTree.InternalNode);
		Assert.assertEquals(tree.search(4), 4);
		// 10 represents full b+ tree at level 2;
		for (int i = 5; i < 10; i++) {
			tree.insert(i, i);
		}
		Assert.assertEquals(tree.root.keyNumber(), 3);
		tree.insert(10, 10);
		Assert.assertEquals(tree.root.keyNumber(), 1);

		Assert.assertEquals(tree.search(4), 4);
		Assert.assertEquals(tree.search(6), 6);
		Assert.assertEquals(tree.search(10), 10);
	}

	@Test
	public void testBPlusTreeDeleteLeafNode() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		Assert.assertEquals(tree.search(1), 1);
		tree.delete(1);
		Assert.assertNull(tree.search(1));
	}

	@Test
	public void testBPlusTreeDeleteInternalNode() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertEquals(tree.search(3), 3);
		tree.delete(3);
		Assert.assertNull(tree.search(3));
	}

	@Test
	public void testBPlusTreeDeleteInternalNodeRootUnderflow() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		tree.insert(2, 2);
		tree.insert(3, 3);
		tree.insert(4, 4);
		Assert.assertEquals(tree.search(3), 3);
		Assert.assertEquals(tree.root.keyNumber(), 1);

		tree.delete(2);
		Assert.assertNull(tree.search(2));
		Assert.assertEquals(tree.root.keyNumber(), 3);

		tree.insert(2, 2);
		Assert.assertEquals(tree.search(2), 2);

		tree.delete(3);
		Assert.assertNull(tree.search(3));
		Assert.assertEquals(tree.root.keyNumber(), 3);
	}

	@Test
	public void testBPlusTreeToString1() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		Assert.assertEquals(tree.toString(), "{[1]}\n");
	}

	@Test
	public void testBPlusTreeToString2() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		Assert.assertEquals(tree.toString(), "{[1]}\n");

		tree.insert(2, 2);
		tree.insert(3, 3);
		Assert.assertEquals(tree.toString(), "{[1, 2, 3]}\n");
	}
	@Test
	public void testBPlusTreeToString3() {
		BPlusTree tree = new BPlusTree(4);
		tree.insert(1, 1);
		Assert.assertEquals(tree.toString(), "{[1]}\n");

		tree.insert(2, 2);
		tree.insert(3, 3);
		Assert.assertEquals(tree.toString(), "{[1, 2, 3]}\n");

		tree.insert(4, 4);
		Assert.assertEquals(tree.toString(), "{[3]}\n{[1, 2], [3, 4]}\n");
	}

	@Test
	public void testBPlusTreeToString4() {
		BPlusTree tree = new BPlusTree(4);
		for (int i = 1; i <= 10; i++) {
			tree.insert(i, i);
		}
		// 内部节点split时，会删除提上来的key
		Assert.assertEquals(tree.toString(), "{[7]}\n{[3, 5], [9]}\n{[1, 2], [3, 4], [5, 6]}, {[7, 8], [9, 10]}\n");
	}

}

