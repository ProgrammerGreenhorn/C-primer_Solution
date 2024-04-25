#include <iostream>
void func(int i) {
  int b = 0;
  static int c = 1;
  ++b;
  ++c;
  std::cout << b << " " << c << std::endl;
}

int main() {
  func(1);
  std::cout << std::endl;
  func(1);
}