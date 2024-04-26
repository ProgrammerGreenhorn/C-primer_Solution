#include <iostream>
void f() { std::cout << 1 << std::endl; }
void f(int) { std::cout << 2 << std::endl; }
void f(int, int) { std::cout << 3 << std::endl; }
void f(double, double) { std::cout << 4 << std::endl; }

int main() {
  // wrong
  // f(2.56,42);

  // 2
  f(42);

  // 3
  f(42, 0);

  // 4
  f(2.56, 3.14);
  return 0;
}