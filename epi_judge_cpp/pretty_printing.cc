#include <string>
#include <vector>

using std::string;
using std::vector;

int MinimumMessiness(const vector<string>& words, int line_length) {
  // Implement this placeholder.
  return 0;
}

#include "test_framework/generic_test.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"words", "line_length"};
  GenericTestMain(args, "pretty_printing.tsv", &MinimumMessiness,
                  DefaultComparator{}, param_names);
  return 0;
}
