
#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec{1, 2, 3, 4, 5};
  int a[5], i = 0;
  for (auto &x : a) {
    x = vec[i];
    i++;
  }
  for (auto x : a) {
    std::cout << x << std::endl;
  }
}