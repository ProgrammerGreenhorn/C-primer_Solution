#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
int main() {
  std::istream_iterator<int> cin_it(std::cin), eof;
  std::vector<int> vec;

  // copy() use (it1,it2) to init vec
  // back_inserter use push_back();
  std::copy(cin_it, eof, std::back_inserter(vec));

  std::sort(vec.begin(), vec.end());

  for (auto x : vec) {
    std::cout << x << std::endl;
  }
  return 0;
}