#include <iostream>
#include <istream>
#include <string>

std::istream &func(std::istream &is) {
  std::string str{""};
  std::istream::iostate old_state = is.rdstate();
  while (!is.eof()) {
    std::getline(is, str);
    std::cout << str << std::endl;
  }
  is.clear(old_state);
  return is;
}
int main() {
  func(std::cin);
  std::cout << std::cin.rdstate() << std::endl;
  return 0;
}