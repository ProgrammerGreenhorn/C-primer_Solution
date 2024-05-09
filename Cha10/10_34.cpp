#include <iostream>
#include <vector>
int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6};
  auto rbeg = v.crbegin(), rend = v.crend();
  while (rbeg != rend) {
    std::cout << *rbeg << std::endl;
    ++rbeg;
  }
  return 0;
}