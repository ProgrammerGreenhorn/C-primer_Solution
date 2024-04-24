#include <iostream>
#include <iterator>
int main() {
  int a[5]{1, 1, 1, 1, 1};
  for (int *bp = std::begin(a), *ep = std::end(a); bp != ep; bp++) {
    *bp = 0;
  }
  for (auto x : a) {
    std::cout << x << std::endl;
  }
  return 0;
}