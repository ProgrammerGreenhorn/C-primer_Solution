#include <cstdlib>
#include <iostream>
void fun(int val) {
  if (val >= 0) {
    std::cout << val << std::endl;
  } else {
    std::cout << -val << std::endl;
  }
}

int main(int argc, char **argv) {
  fun(atoi(argv[1]));
  return 0;
}