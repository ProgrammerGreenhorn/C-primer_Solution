#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
struct absInt {
  int operator()(int i) { return std::abs(i); }
};
int main() {
  std::vector<int> v = {1, 2, 3};
  std::vector<int> v2 = {2, 3, 4};

  std::copy(v.cbegin(), v.cend(), std::back_inserter(v2));
  for (auto x : v2) {
    std::cout << x << std::endl;
  }
  std::cout << "-----------------" << std::endl;
  int i = -1;
  absInt absint;
  std::cout << absint(i) << std::endl;
}