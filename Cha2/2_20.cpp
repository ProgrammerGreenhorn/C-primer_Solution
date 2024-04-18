#include <iostream>

typedef double wages ;
typedef wages base, *p;
typedef int num,*n;
using s = int;

int main() {
  s i = 42;
  int *pi = &i;
  *pi = *pi * *pi;
  std::cout << i << std::endl;

  int a = 1, *const cp = &a;
  *cp = 2;
  std::cout << a << " " << *cp << std::endl;

  constexpr int mf = 20;
  constexpr int liit = mf + 1;

  std::cout << mf << " " << liit << std::endl;

  //auto &h = 42;
  const auto &j = 42;
}
