#include <vector>

using std::vector;

vector<int> Multiply(vector<int> num1, vector<int> num2) {
  // Implement this placeholder.
  return {};
}

#include "test_framework/generic_test.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"num1", "num2"};
  GenericTestMain(args, "int_as_array_multiply.tsv", &Multiply,
                  DefaultComparator{}, param_names);
  return 0;
}
