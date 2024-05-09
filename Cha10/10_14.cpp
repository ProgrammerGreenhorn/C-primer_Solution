#include <iostream>
int main() {
  auto func = [](const int &a, const int &b) -> int { return a + b; };
  auto b = func(1, 2);
  std::cout << b << std::endl;
  return 0;
}