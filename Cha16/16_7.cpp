#include <iostream>
template <typename T, unsigned size>
std::size_t my_size(const T (&arri)[size]) {
  return size;
}

int main() {
  int a[5], b[3], c[4];
  std::cout << my_size(a) << std::endl;
  std::cout << my_size(b) << std::endl;
  std::cout << my_size(c) << std::endl;
}