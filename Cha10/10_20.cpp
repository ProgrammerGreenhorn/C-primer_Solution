#include <algorithm>
#include <string>
#include <vector>
int main() {
  std::vector<std::string> v;
  std::count_if(v.begin(), v.end(),
                [](const std::string &s) -> bool { return s.size() >= 6; });
  return 0;
}