#include <iostream>
int main() {
  int x[10];
  int *p = x;
  std::cout << sizeof(x) / sizeof(*x) << std::endl;

  // the size of pointer is 8 byte
  std::cout << sizeof(p) / sizeof(*p) << std::endl;
}