#include <iostream>
#include <vector>
// #define NDEBUG
void recur_print_vector(const std::vector<int> &vec) {

  if (vec.size() == 0)
    return;
#ifndef NDEBUG
  std::cout << __func__ << '\t' << vec.size() << '\t';
#endif
  std::cout << vec[0] << std::endl;
  std::vector<int> temp(vec.begin() + 1, vec.end());
  recur_print_vector(temp);
}

int main() {
  std::vector<int> vec1{1, 2, 3, 4, 5};
  recur_print_vector(vec1);
  return 0;
}