#include <functional>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>
class saleData {};
template <typename T, typename F = std::less<T>>
int compare(const T &v1, const T &v2, F f = F()) {
  if (f(v1, v2))
    return -1;
  if (f(v2, v1))
    return 1;
  return 0;
}

// when we need to tell the compiler it is a leixing
// use typename
template <typename T> typename T::value_type top(const T &t) {
  if (!t.empty()) {
    return t.back();
  }
  return typename T::value_type();
}

// do not know the type of return,use backput and decltype
template <typename T>
auto fcn(T beg, T end) -> typename std::remove_reference<decltype(*beg)>::type {
  return *beg;
}

int main() {
  std::cout << compare(1, 2) << std::endl;
  std::cout << compare(std::string{"abc"}, std::string{"bbc"}) << std::endl;
  std::cout << compare(std::vector<int>{1, 2, 3}, std::vector<int>{4, 5, 6})
            << std::endl;
  // saleData s1, s2;
  // compare(s1, s2);

  std::vector<int> vec{1, 2, 3};
  std::vector<std::string> svec{"hello", "world"};
  std::cout << top(vec) << std::endl;
  std::cout << top(svec) << std::endl;
}