#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec{1, 2, 3, 4, 5};
  std::vector<int>::size_type cnt = vec.size();

  for (std::vector<int>::size_type index = 0; index != vec.size();
       index++, cnt--) {
    vec[index] = cnt;
  }
  for (auto x : vec) {
    std::cout << x << std::endl;
  }
}