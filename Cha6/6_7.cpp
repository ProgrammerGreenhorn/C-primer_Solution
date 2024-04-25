#include <iostream>
int func() {
  static int i = 0;
  return i++;
}
int main() {
  std::cout << func() << std::endl;
  std::cout << func() << std::endl;
  std::cout << func() << std::endl;
  std::cout << func() << std::endl;
  return 0;
}