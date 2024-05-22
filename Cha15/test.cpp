#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
int main() {
  std::map<std::string, std::function<int(int, int)>> m;
  std::function<int(std::string, int)>::result_type i = 0;
  std::function<int(std::string, int)>::first_argument_type j = "hello";
  std::function<int(std::string, int)>::second_argument_type k = 0;

  std::vector<int> vec{2, 2, 2, 1, 1, 5, 5, 4, 3, 5, 3, 3, 7, 9, 8, 6, 5, 3};
  std::sort(vec.begin(), vec.end());
  std::pair<std::vector<int>::iterator, std::vector<int>::iterator> p =
      std::equal_range(vec.begin(), vec.end(), 3);

  for (auto x : vec) {
    std::cout << x << std::endl;
  }
  for (; p.first != p.second; ++p.first) {
    std::cout << *(p.first) << std::endl;
  }
  return 0;
}