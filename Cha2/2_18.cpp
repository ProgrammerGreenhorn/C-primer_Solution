

#include <iostream>
int main() {
  int a = 10, b = 11;
  int *c = &a;
  int *d = &b;
  c = &b;
  *d = 20;

  std::cout << a <<" "<< b <<" "<< *c <<" "<< *d <<" "<< std::endl;
}