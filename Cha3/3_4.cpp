
#include <iostream>
#include <string>
int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  if (s1 > s2) {
    std::cout << s1 << std::endl;
  } else {
    std::cout << s2 << std::endl;
  }

  if (s1.size() > s2.size()) {
    std::cout << s1 << std::endl;
  } else {
    std::cout << s2 << std::endl;
  }
  return 0;
}