#include <iostream>
#include <string>
template <typename T, unsigned size> void print(const T (&arri)[size]) {
  for (unsigned i = 0; i != size; ++i) {
    std::cout << arri[i] << std::endl;
  }
}

int main() {
  // remember array can not be copy,so the parameter must be & or *
  int a[2] = {1, 2};
  char b[2] = {'a', 'b'};
  std::string c[2] = {"hello", "wrold"};
  print(a);
  print(b);
  print(c);
}