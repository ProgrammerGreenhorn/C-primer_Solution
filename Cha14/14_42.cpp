#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
int main() {
  std::greater<int> gre;
  std::not_equal_to<int> net;
  std::multiplies<int> mtp;
  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

  // use bind to let it be a one weici
  // count how many > 4
  std::cout << std::count_if(vec.cbegin(), vec.cend(),
                             std::bind(gre, std::placeholders::_1, 4))
            << std::endl;
  // find_if() returns the iterator
  // find the first not equal to 1
  std::cout << *(std::find_if(vec.cbegin(), vec.cend(),
                              std::bind(net, std::placeholders::_1, 1)))
            << std::endl;

  // transform
  std::transform(vec.begin(), vec.end(), vec.begin(),
                 std::bind(mtp, std::placeholders::_1, 2));

  for (auto x : vec) {
    std::cout << x << std::endl;
  }
  return 0;
}