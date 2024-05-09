#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using std::list;
using std::vector;

int main() {
  vector<int> vec;
  list<int> lst;
  int i;
  while (std::cin >> i) {
    lst.push_back(i);
  }
  // when copy,the dest should have its size at leatst == source.size()
  vec.resize(lst.size());
  std::copy(lst.cbegin(), lst.cend(), vec.begin());

  for (auto x : vec) {
    std::cout << x << std::endl;
  }

  vector<int> vec2;
  vec2.resize(10);
  std::fill_n(vec2.begin(), 10, 0);
}