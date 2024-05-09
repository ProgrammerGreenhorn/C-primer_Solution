#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
int main() {
  std::vector<int> vec{1, 1, 2, 3, 4, 4, 5, 6, 6, 7};
  std::list<int> lst, lst2, lst3;

  // inserter
  std::unique_copy(vec.cbegin(), vec.cend(), std::inserter(lst, lst.begin()));
  for (auto x : lst) {
    std::cout << x << std::endl;
  }

  std::cout << "--------" << std::endl;
  // front_inserter
  std::unique_copy(vec.cbegin(), vec.cend(), std::front_inserter(lst2));
  for (auto x : lst2) {
    std::cout << x << std::endl;
  }
  std::cout << "--------" << std::endl;
  // back_inserter
  std::unique_copy(vec.cbegin(), vec.cend(), std::back_inserter(lst3));
  for (auto x : lst3) {
    std::cout << x << std::endl;
  }
  return 0;
}