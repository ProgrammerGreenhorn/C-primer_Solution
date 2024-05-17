#include <algorithm>
#include <initializer_list>
#include <iostream>
#include <vector>
class Foo {
public:
  Foo() = default;
  Foo(std::initializer_list<int> il) : v(il.begin(), il.end()){};
  Foo sorted() const &;
  Foo sorted() &&;

private:
  std::vector<int> v;
};

// wrong ,this will be a infite recursive beacuse yizhi call on &
// Foo Foo::sorted() const & {
//   std::cout << "sorted" << std::endl;
//   Foo ret(*this);
//   return ret.sorted();
// }

// right,call the && version
Foo Foo::sorted() const & {
  std::cout << "sorted" << std::endl;

  return Foo(*this).sorted();
}

Foo Foo::sorted() && {
  std::sort(v.begin(), v.end());
  return *this;
}

int main() {
  Foo f1({2, 1, 4, 2, 6, 2, 3, 5});
  Foo f2 = f1.sorted();

  return 0;
}