#include <iostream>
#include <ostream>
template <typename T> std::ostream &print(std::ostream &os, const T &t) {
  return os << t;
}

template <typename T, typename... Args>
std::ostream &print(std::ostream &os, const T &t, const Args &...rest) {
  os << t;                   // print the first t
  return print(os, rest...); // print the rest,when comes to the last
                             // parameter,it will call the above print()
}

int main() {
  print(std::cout, 42);
  std::cout<<std::endl;
  print(std::cout, 42, 2.0);
  std::cout<<std::endl;
  print(std::cout, 42, 2.0, "hello,world");
  std::cout<<std::endl;
}