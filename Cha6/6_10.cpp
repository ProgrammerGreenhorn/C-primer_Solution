#include <iostream>
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int c = 1, d = 2;
  swap(c, d);
  std::cout << c << d << std::endl;
  return 0;
}