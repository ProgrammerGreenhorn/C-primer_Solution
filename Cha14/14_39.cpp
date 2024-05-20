#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
class stringLength {
public:
  stringLength(std::vector<std::string>::size_type i) : length(i){};
  bool operator()(const std::string &s) { return s.size() >= length; }

private:
  std::vector<std::string>::size_type length;
};

int main() {
  stringLength sl(9);
  std::vector<std::string> v{"0",    "1",          "22",
                             "15",   "2424",       "2764",
                             "9090", "0123456789", "dsadasdadasfsagas"};
  std::cout << "length over 10 :" << std::count_if(v.cbegin(), v.cend(), sl)
            << std::endl;
  std::cout << "length over 10 use lambda :"
            << std::count_if(
                   v.cbegin(), v.cend(),
                   [](const std::string &s) { return s.size() >= 10; })
            << std::endl;
}