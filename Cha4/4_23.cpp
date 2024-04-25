#include <iostream>
#include <string>
int main() {
  std::string s = "word";
  // check if the end is 's' ,if not add 's'
  std::string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

  std::cout << s << " " << pl << std::endl;
}