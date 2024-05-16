#include <iostream>
#include <string>
using std::string;

int main() {
  string s1("sdsa");
  string s2 = std::move(s1);
  std::cout << s1 << std::endl;
  std::cout << s2 << std::endl;
}