#include <iostream>
#include <string>
template <typename T, typename... Args>
void foo(const T &t1, const Args &...args) {
  std::cout << sizeof...(Args) << std::endl;
  std::cout << sizeof...(args) << std::endl;
  std::cout << "-----------" << std::endl;
}

int main() {
  int i = 0;
  double d = 3.14;
  std::string s = "hello,world";
  // void foo(const int&,const double&,const int&,const string&)
  foo(i, s, 42, d);
  foo(s, 42, "hi");
  foo(d, s);
  // empty bao
  foo("hi");
  return 0;
}