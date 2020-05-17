package com.jgfanng.algo;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

class BPlusTreeTest {

    BPlusTree<String, String> instance;

    @Test
    void testDefaultConstructor() {
        instance = new BPlusTree<>();
    }

    @Test
    void search() {
        instance = new BPlusTree<>(4);
        instance.insert("1", "1");
        instance.insert("2", "2");
        instance.insert("3", "3");
        Assertions.assertEquals("1", instance.search("1")); // p1
        // branch (2 level)
        instance.insert("4", "4");
        Assertions.assertEquals("4", instance.search("4")); // p2
        instance.insert("5", "5");
        instance.insert("6", "6");
        instance.insert("7", "7");
        instance.insert("8", "8");
        instance.insert("9", "9");
        // branch (3 level)
        instance.insert("a", "a");
        Assertions.assertEquals("a", instance.search("a")); // p3
    }

    @Test
    void searchRange() {
        instance = new BPlusTree<>(4);
        Assertions.assertArrayEquals(new String[] {},instance.searchRange("1", BPlusTree.RangePolicy.EXCLUSIVE, "1", BPlusTree.RangePolicy.EXCLUSIVE).toArray());
        instance.insert("1", "1");
        instance.insert("1", "1");
        Assertions.assertArrayEquals(new String[] {}, instance.searchRange("1", BPlusTree.RangePolicy.INCLUSIVE, "1", BPlusTree.RangePolicy.EXCLUSIVE).toArray());
        Assertions.assertArrayEquals(new String[] {"1"}, instance.searchRange("1", BPlusTree.RangePolicy.INCLUSIVE, "1", BPlusTree.RangePolicy.INCLUSIVE).toArray());
        instance.insert("2", "2");
        instance.insert("3", "3");
        Assertions.assertArrayEquals(new String[] {"2", "3"}, instance.searchRange("1", BPlusTree.RangePolicy.EXCLUSIVE, "3", BPlusTree.RangePolicy.INCLUSIVE).toArray()); // p1
        // branch (2 level)
        instance.insert("4", "4");
        Assertions.assertArrayEquals(new String[] {"2", "3", "4"}, instance.searchRange("1", BPlusTree.RangePolicy.EXCLUSIVE, "4", BPlusTree.RangePolicy.INCLUSIVE).toArray()); // p2
        instance.insert("5", "5");
        instance.insert("6", "6");
        instance.insert("7", "7");
        instance.insert("8", "8");
        instance.insert("9", "9");
        // branch (3 level)
        instance.insert("a", "a");
        Assertions.assertArrayEquals(new String[] {"2", "3", "4", "5", "6"}, instance.searchRange("1", BPlusTree.RangePolicy.EXCLUSIVE, "7", BPlusTree.RangePolicy.EXCLUSIVE).toArray()); // p3
    }

    @Test
    void insert() {
        instance = new BPlusTree<>(4);
        instance.insert("1", "1");
        instance.insert("1", "1");
        instance.insert("2", "2");
        instance.insert("3", "3");
        // branch (2 level)
        instance.insert("4", "4");
        instance.insert("5", "5");
        instance.insert("6", "6");
        instance.insert("7", "7");
        instance.insert("8", "8");
        instance.insert("9", "9");
        // branch (3 level)
        instance.insert("a", "a");
        Assertions.assertEquals(10, instance.searchRange("1", BPlusTree.RangePolicy.INCLUSIVE, "a", BPlusTree.RangePolicy.INCLUSIVE).size());
    }

    @Test
    void delete() {
        instance = new BPlusTree<>(4);
        for (char c = 'a'; c < 'a' + 27; c++) {
            instance.insert(String.valueOf(c), String.valueOf(c));
        }
        Assertions.assertEquals(27, instance.searchRange("a", BPlusTree.RangePolicy.INCLUSIVE, "{", BPlusTree.RangePolicy.INCLUSIVE).size());
        for (char c = 'a'; c < 'a' + 20; c++) {
            instance.delete(String.valueOf(c));
        }
        Assertions.assertEquals(7, instance.searchRange("a", BPlusTree.RangePolicy.INCLUSIVE, "{", BPlusTree.RangePolicy.INCLUSIVE).size());
        for (char c = 'a' + 20; c < 'a' + 27; c++) {
            instance.delete(String.valueOf(c));
        }
        Assertions.assertEquals(0, instance.searchRange("a", BPlusTree.RangePolicy.INCLUSIVE, "{", BPlusTree.RangePolicy.INCLUSIVE).size());

    }

    @Test
    void testToString() {
        instance = new BPlusTree<>(4);
        Assertions.assertEquals("{[]}\n", instance.toString());
        instance.insert("1", "1");
        instance.insert("2", "2");
        instance.insert("3", "3");
        // branch (2 level)
        instance.insert("4", "4");
        instance.insert("5", "5");
        instance.insert("6", "6");
        instance.insert("7", "7");
        instance.insert("8", "8");
        instance.insert("9", "9");
        Assertions.assertEquals("{[3, 5, 7]}\n" + "{[1, 2], [3, 4], [5, 6], [7, 8, 9]}\n", instance.toString());
        // branch (3 level)
        instance.insert("a", "a");
        Assertions.assertEquals("{[7]}\n" + "{[3, 5], [9]}\n" + "{[1, 2], [3, 4], [5, 6]}, {[7, 8], [9, a]}\n", instance.toString());
    }
}