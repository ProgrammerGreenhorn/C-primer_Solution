#include <iostream>
#include <string>
#include <vector>
class NoDefault {
public:
  NoDefault(int i){};
};

class C {
public:
  C() : nd(0){};

private:
  NoDefault nd;
};

int main() {
  C c;
  // wrong, have no defalut constructor
  // std::vector<NoDefault> vec(10);
  std::vector<C> vec2(10);

  std::string s1{"sdsd"};
  s1.append("sdsds");
  std::cout << s1 << std::endl;

  return 0;
}