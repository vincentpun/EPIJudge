package epi;

import epi.test_framework.EpiTest;
import epi.test_framework.GenericTest;

public class DeleteKthLastFromList {
  @EpiTest(testfile = "delete_kth_last_from_list.tsv")

  // Assumes L has at least k nodes, deletes the k-th last node in L.
  public static ListNode<Integer> removeKthLast(ListNode<Integer> L, int k) {
    // Implement this placeholder.
    return null;
  }

  public static void main(String[] args) {
    GenericTest.runFromAnnotations(
        args, new Object() {}.getClass().getEnclosingClass());
  }
}
