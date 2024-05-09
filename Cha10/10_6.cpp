#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

int main() {
  vector<int> v(10, 1);
  std::fill_n(v.begin(), v.size(), 0);
  for (auto x : v) {
    std::cout << x << std::endl;
  }
}