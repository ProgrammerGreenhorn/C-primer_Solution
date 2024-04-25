#include "Chapter6.h"
#include <cstdlib>
#include <iostream>

long long fact(int val) {
  if (val == 0 || val == 1) {
    return 1;
  }
  return fact(val - 1) * val;
}

int main(int argc, char **argv) {
  std::cout << fact(atoi(argv[1])) << std::endl;
  return 0;
}