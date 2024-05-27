#include <iostream>
#include <utility>
template <typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2) {
  f(std::forward<T2>(t2), std::forward<T1>(t1));
}

void f(int v1, int &v2) { std::cout << v1 << " " << ++v2 << std::endl; }

void g(int &&v1,int &v2){ std::cout << v1 << " " << v2 << std::endl; }

int main() {
  int a = 1, b = 1;
  flip(f, a, b);
  std::cout << a << " " << b << std::endl;
  flip(g,a,42);
   std::cout << a << " " << b << std::endl;
}