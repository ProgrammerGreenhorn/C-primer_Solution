#include <iostream>
#include <numeric>
#include <vector>
int main() {
  std::vector<int> vec{1, 2, 3, 4, 5};
  auto sum = std::accumulate(vec.cbegin(), vec.cend(), 0);
  std::cout << sum << std::endl;
  return 0;
}