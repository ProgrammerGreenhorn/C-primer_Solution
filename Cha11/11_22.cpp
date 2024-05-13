#include <map>
#include <string>
#include <utility>
#include <vector>
int main() {
  std::map<std::string, std::vector<int>> m;

  // insert return a pair(iterator,bool)
  std::pair<std::map<std::string, std::vector<int>>::iterator, bool> ret =
      m.insert(std::pair<std::string, std::vector<int>>{"hello", {1, 2, 3}});

  return 0;
}