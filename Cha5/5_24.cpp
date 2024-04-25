#include <cstdlib>
#include <iostream>
#include <stdexcept>
int main(int argc, char **argv) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (b == 0) {
    throw std::runtime_error("the divider can not be zero");
  }
  std::cout << a + b << std::endl;
}