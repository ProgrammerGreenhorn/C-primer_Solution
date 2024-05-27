#include <vector>
template <typename T> void g(T &&val){};

template <typename T> void f(T &&val) { std::vector<T> v; };

int main() {
  int i = 0;
  const int ri = i;
  // T = int&
  g(i);

  // T = const int & val = const int &
  g(ri);

  // T = int
  g(i * ri);

  // T = int&
  g(i = ri);

  // right,T = int
  f(42);

  // wrong,T = int &
  // f(i);

  return 0;
}