#include <iostream>
class Number {
public:
  Number() : i(0){};
  Number(const Number &n) : i(n.i + 1){};
  int i;
};

void f(const Number &n) { std::cout << n.i << std::endl; }
void f1(Number n) { std::cout << n.i << std::endl; }

int main() {
  Number a, b = a, c = b;
  f(a);
  f(b);
  f(c);

  // f1() occurs copy,print out not the a b c's i,but a new created object's;
  f1(a);
  f1(b);
  f1(c);

  return 0;
}