#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using std::placeholders::_1;

bool check_size(const int &i, std::string::size_type sz) { return i > sz; }
int main() {
  std::string str{"asdf"};
  std::vector<int> v{1, 2, 3, 4, 5, 6};
  auto check_size6 = std::bind(check_size, _1, str.size());

  auto wc = std::find_if(v.begin(), v.end(), check_size6);
  std::cout << *wc << std::endl;
}