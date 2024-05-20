#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
int main() {
  std::modulus<int> mod;
  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

  auto flag = std::all_of(vec.begin(), vec.end(), [mod](int n) -> bool {
    if (mod(n, 2) == 0) {
      return true;
    } else {
      return false;
    }
  });
  std::cout << (flag ? "yes!" : "no!") << std::endl;
  return 0;
}