#include <string>
#include <vector>

using std::string;
using std::vector;

string MajoritySearch(vector<string>::const_iterator stream_begin,
                      const vector<string>::const_iterator stream_end) {
  // Implement this placeholder.
  return "";
}

string MajoritySearchWrapper(const vector<string>& stream) {
  return MajoritySearch(cbegin(stream), cend(stream));
}

#include "test_framework/generic_test.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"stream"};
  GenericTestMain(args, "majority_element.tsv", &MajoritySearchWrapper,
                  DefaultComparator{}, param_names);
  return 0;
}
