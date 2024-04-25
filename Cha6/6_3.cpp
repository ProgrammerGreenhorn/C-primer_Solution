#include <cstdlib>
#include <iostream>
long long fact(int val) {
  if (val == 0 || val == 1) {
    return 1;
  }
  return fact(val - 1) * val;
}

int main(int argc, char **argv) {
  auto d = fact(atoi(argv[1]));
  std::cout << d << std::endl;
  return 0;
}