#include <functional>
#include <iostream>
#include <map>
#include <string>
int add(int i, int j) { return i + j; }

auto mul = [](int m, int n) -> int { return m * n; };

struct divide {
  int operator()(int denominator, int divisor) { return denominator / divisor; }
};

auto sub = std::minus<int>();

int main() {
  std::map<std::string, std::function<int(int, int)>> func_map = {
      {"+", add}, {"-", sub}, {"*", mul}, {"/", divide()}};
  std::cout << func_map["+"](10, 5) << std::endl;
  std::cout << func_map["-"](10, 5) << std::endl;
  std::cout << func_map["*"](10, 5) << std::endl;
  std::cout << func_map["/"](10, 5) << std::endl;
  return 0;
}