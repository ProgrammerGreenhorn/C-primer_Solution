#include <iostream>
#include <string>
using std::string;
int main() {
  string s1;
  string s2(s1);
  string s3 = s1;
  string s4("value");
  string s5 = "value";
  string s6(10, 'c');

  string line;
  while (std::getline(std::cin, line)) {
    if (!line.empty()) {
      std::cout << line << '\t';
      //the return type of size() is size_type, a unsigned
      auto len = line.size();
      std::cout<<len<<std::endl;
    }
  }
  return 0;
}