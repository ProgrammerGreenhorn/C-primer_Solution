#include <iostream>
#include <list>
using std::list;

int main() {
  list<int> lst{1, 2, 3};
  auto it = lst.begin();
  // 1. elem1 == elem2
  lst.erase(it, it);
  for (auto x : lst) {
    std::cout << x << std::endl;
  }

  // 2.elem2 == end()
  auto it1 = lst.end();
  lst.erase(it, it1);
  std::cout << lst.size() << std::endl;

  // 3.elem1 == elem2 == end()
  lst = {1, 2, 3};
  lst.erase(it1, it1);
  for (auto x : lst) {
    std::cout << x << std::endl;
  }
  return 0;
}