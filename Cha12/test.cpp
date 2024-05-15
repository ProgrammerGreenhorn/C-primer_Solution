#include <new>
int main() {
  const int *p = new const int(1024);
  auto q = new const int(1);

  int *p2 = new (std::nothrow) int(2);

  delete p;
  delete q;
  delete p2;
  return 0;
}