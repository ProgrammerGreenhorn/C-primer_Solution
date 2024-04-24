#include <iostream>
#include <iterator>
#include <vector>
int main() {
  int arr[5]{1, 2, 3, 4, 5};
  std::vector<int> vec(std::begin(arr), std::end(arr));

  for (auto x : vec) {
    std::cout << x << std::endl;
  }
  return 0;
}