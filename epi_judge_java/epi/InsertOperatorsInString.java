package epi;

import epi.test_framework.EpiTest;
import epi.test_framework.GenericTest;

import java.util.List;

public class InsertOperatorsInString {
  @EpiTest(testfile = "insert_operators_in_string.tsv")

  public static boolean expressionSynthesis(List<Integer> digits, int target) {
    // Implement this placeholder.
    return true;
  }

  public static void main(String[] args) {
    GenericTest.runFromAnnotations(
        args, new Object() {}.getClass().getEnclosingClass());
  }
}
