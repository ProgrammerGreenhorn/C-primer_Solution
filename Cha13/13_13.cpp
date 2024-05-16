#include <iostream>
#include <vector>
struct X {
  X() { std::cout << "X()" << std::endl; }
  X(const X &) { std::cout << "X(const X&)" << std::endl; }
  X &operator=(const X &) {
    std::cout << "operator=(const X&)" << std::endl;
    return *this;
  }
  // des
  ~X() { std::cout << "~X()" << std::endl; }
};

void func1(X x) { std::cout << "in func1(X x)" << std::endl; }
void func2(X &x) { std::cout << "in func2(X &x)" << std::endl; }
int main() {
  X x1;
  func1(x1);
  // reference not occur copy;
  func2(x1);
  X x2, x3;
  // first create a vector<x1,x2,x3> then copy it to v ,so there
  // is 6 copy and 9 desctructor
  std::vector<X> v{x1, x2, x3};

  X *x4 = new X();
  delete x4;
  return 0;
}