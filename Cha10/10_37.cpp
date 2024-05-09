#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
int main() {
  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::list<int> lst;

  std::copy(vec.crbegin() + 3, vec.crbegin() + 8, std::back_inserter(lst));

  for (auto x : lst) {
    std::cout << x << std::endl;
  }
  return 0;
}