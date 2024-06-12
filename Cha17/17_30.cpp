#include <cstddef>
#include <cstdint>
#include <iostream>
#include <ostream>
#include <random>
unsigned int func(unsigned int seed = 0, unsigned min = 0,
                  unsigned max = INT32_MAX) {
  static std::default_random_engine e(seed);
  static std::uniform_int_distribution<int> u(min, max);
  return u(e);
}

int main() {
  std::cout << std::endl;
  for (std::size_t i = 0; i < 10; ++i) {
    std::cout << func(10, 0, 1000) << " ";
  }
  std::cout << std::endl;
}