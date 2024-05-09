#include <algorithm>
#include <list>
int main() {
  std::list<int> lst{1, 2, 0, 4, 5, 6, 7, 0, 9};
  auto it = std::find(lst.crbegin(), lst.crend(), 0);
  return 0;
}