#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec{1, 2, 2, 3, 5, 2, 5, 6, 9, 10};
  std::vector<int>::iterator iter = vec.begin(),
                             mid = vec.begin() + (vec.size() / 2);
  while (iter != mid) {
    if (*iter == 2) {
      // after insert element,the pre iter will be meiyong,
      // we need to update it
      iter = vec.insert(iter, 4);
      mid = vec.begin() + (vec.size() / 2);
      // need to move forward 2 steps because insert() return the iter point to
      // the new added element
      iter += 2;
    } else {
      ++iter;
    }
  }
  for (auto x : vec) {
    std::cout << x << std::endl;
  }
  return 0;
}