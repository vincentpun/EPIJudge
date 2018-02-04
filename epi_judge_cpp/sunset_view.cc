#include <iterator>
#include <vector>

using std::vector;

vector<int> ExamineBuildingsWithSunset(
    vector<int>::const_iterator sequence_begin,
    const vector<int>::const_iterator& sequence_end) {
  // Implement this placeholder.
  return {};
}

vector<int> ExamineBuildingsWithSunsetWrapper(const vector<int>& sequence) {
  return ExamineBuildingsWithSunset(cbegin(sequence), cend(sequence));
}

#include "test_framework/generic_test.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"sequence"};
  GenericTestMain(args, "sunset_view.tsv", &ExamineBuildingsWithSunsetWrapper,
                  DefaultComparator{}, param_names);
  return 0;
}
