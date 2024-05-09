#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
int main() {
  std::istream_iterator<int> cin_it(std::cin), eof;
  std::vector<int> vec, unique_vec;

  // copy() use (it1,it2) to init vec
  // back_inserter use push_back();

  std::copy(cin_it, eof, std::back_inserter(vec));
  std::sort(vec.begin(), vec.end());
  // unique_copy can only delete the lianxu de yuansu
  std::unique_copy(vec.begin(), vec.end(), std::back_inserter(unique_vec));
  for (auto x : unique_vec) {
    std::cout << x << std::endl;
  }
  return 0;
}