
#include <iostream>
int main() {
  int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  using int_array = int[4];

  for (int_array *i = a; i != a + 3; i++) {
    for (int *j = *i; j != *i + 4; j++) {
      std::cout << *j << std::endl;
    }
  }
}