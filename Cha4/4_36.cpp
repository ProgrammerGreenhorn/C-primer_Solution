#include <iostream>
int main() {
  int i = 3;
  double d = 3.5;

  std::cout << (i *= (static_cast<int>(d))) << std::endl;
}