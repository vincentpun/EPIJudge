#include <vector>

using std::vector;

vector<int> SortKIncreasingDecreasingArray(const vector<int>& A) {
  // Implement this placeholder.
  return {};
}

#include "test_framework/generic_test.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"A"};
  GenericTestMain(args, "sort_increasing_decreasing_array.tsv",
                  &SortKIncreasingDecreasingArray, DefaultComparator{},
                  param_names);
  return 0;
}
