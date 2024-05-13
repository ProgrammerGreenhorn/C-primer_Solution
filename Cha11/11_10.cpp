#include <list>
#include <map>
#include <vector>
int main() {
  // the key should compare with <
  std::map<std::vector<int>::iterator, int> map1;

  // wrong
  std::map<std::list<int>::iterator, int> map2;
  return 0;
}