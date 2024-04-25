#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec;
  for (unsigned i = 0; i < 100; i++) {
    vec.push_back(i);
  }
  for (auto &num : vec) {
    num = (num % 2 != 0) ? 2 * num : num;
  }
  for (auto num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}