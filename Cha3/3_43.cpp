#include <iostream>
int main() {
  int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  // 1
  for (auto &i : a) {
    for (auto j : i) {
      std::cout << j << '\t';
    }
  }
  std::cout << std::endl;
  // 2
  for (unsigned i = 0; i < 3; i++) {
    for (unsigned j = 0; j < 4; j++) {
      std::cout << a[i][j] << '\t';
    }
  }
  std::cout << std::endl;

  // 3
  for (int(*i)[4] = a; i != a + 3; i++) {
    for (int *j = *i; j != *i + 4; j++) {
      std::cout << *j << '\t';
    }
  }
  std::cout << std::endl;
}