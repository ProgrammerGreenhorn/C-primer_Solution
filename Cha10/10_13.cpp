#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
bool hava_5_digits(const std::string &s) { return s.size() >= 5; }
int main() {
  std::vector<std::string> v{"hello", "word",    "poinins", "sds",   "a",
                             "gdgd",  "sdadada", "sd",      "wodefa"};
  auto last = std::partition(v.begin(), v.end(), hava_5_digits);
  auto beg = v.begin();

  while (beg != last) {
    std::cout << *beg << '\t';
    ++beg;
  }
  std::cout << std::endl;
  return 0;
}