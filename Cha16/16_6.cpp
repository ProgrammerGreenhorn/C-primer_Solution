
#include <iostream>
template <typename T, unsigned size> 
inline T *my_begin(T (&arri)[size]) {
  return arri;
}

template <typename T, unsigned size> 
inline T *my_last(T (&arri)[size]) {
  return arri + size;
}

int main() {
  int a[5] = {5, 4, 3, 2, 1};

  for (auto beg = my_begin(a); beg != my_last(a); ++beg) {
    std::cout << *beg << std::endl;
  }
  std::string b[3] = {"hello", "world", "hello world"};
  for (auto beg = my_begin(b); beg != my_last(b); ++beg) {
    std::cout << *beg << std::endl;
  }
}