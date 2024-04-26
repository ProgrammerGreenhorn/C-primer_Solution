#include <initializer_list>
#include <iostream>
#include <numeric>
int addAll(std::initializer_list<int> ls) {
  return std::accumulate(ls.begin(), ls.end(), 0);
}

int main() {
  std::cout << addAll({1, 2, 3}) << std::endl;
  std::cout << addAll({1, 2, 3, 4, 5}) << std::endl;
  return 0;
}