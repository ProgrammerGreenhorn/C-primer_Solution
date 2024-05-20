#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
class stringLength {
public:
  stringLength(int i) : length(i){};
  bool operator()(const std::string &s) { return s.size() == length; }

private:
  std::vector<std::string>::size_type length;
};

int main() {
  stringLength sl(2), sl2(4);
  std::vector<std::string> v{"0",    "1",    "22",   "15",
                             "2424", "2764", "9090", "0123456789"};
  std::cout << "length 2 :" << std::count_if(v.cbegin(), v.cend(), sl)
            << std::endl;
  std::cout << "length 4 :" << std::count_if(v.cbegin(), v.cend(), sl2)
            << std::endl;
}