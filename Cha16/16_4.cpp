#include <iostream>
#include <vector>
template <typename iter, typename value>
constexpr iter my_find(iter first, iter last, const value &sought) {
  while (first != last) {
    if (*first == sought) {
      return first;
    }
    ++first;
  }
  return last;
}

int main() {
  std::vector<int> vec{1, 2, 3, 4, 5};
  std::cout << *(my_find(vec.begin(), vec.end(), 3)) << std::endl;
}