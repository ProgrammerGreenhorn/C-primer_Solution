#include <iostream>
void reset(int &val) { val = 0; }
void func(int *p) {}
int main() {
  int i = 1;
  reset(i);
  std::cout << i << std::endl;

  // wrong , you can not bind a (const int*) to (int *)
  // const int j = 1;
  // func(&j);
}