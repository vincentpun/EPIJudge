package epi;

import epi.test_framework.EpiTest;
import epi.test_framework.GenericTest;

import java.util.List;

public class TreeWithParentInorder {
  @EpiTest(testfile = "tree_with_parent_inorder.tsv")

  public static List<Integer> inorderTraversal(BinaryTree<Integer> tree) {
    // Implement this placeholder.
    return null;
  }

  public static void main(String[] args) {
    GenericTest.runFromAnnotations(
        args, new Object() {}.getClass().getEnclosingClass());
  }
}
