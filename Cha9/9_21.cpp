#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec;
  auto iter = vec.cbegin();
  int number = 0;

  while (std::cin >> number) {
    // insert() return a iter point to the new added element
    iter = vec.insert(iter, number);
  }

  for (auto x : vec) {
    std::cout << x << std::endl;
  }
  return 0;
}