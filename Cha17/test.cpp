

#include <cmath>
#include <cstddef>
#include <ios>
#include <iostream>
#include <list>
#include <random>
#include <string>
#include <tuple>
#include <vector>
int main() {
  std::tuple<std::size_t, std::size_t, std::size_t> threeD;

  std::tuple<std::string, std::vector<std::string>, int, std::list<int>>
      someval("hello", {"world", "a"}, 2, {1, 2, 3});

  auto item = std::make_tuple(1, "hello", 2.0);

  auto book = std::get<0>(item);
  std::cout << book << std::endl;

  using trans = decltype(item);

  std::size_t sz = std::tuple_size<trans>::value;

  std::tuple_element<1, trans>::type cnt = std::get<1>(item);

  std::default_random_engine e;
  for (size_t i = 0; i < 10; ++i) {
    std::cout << e() << std::endl;
  }

  std::uniform_int_distribution<unsigned> u(0, 9);
  for (size_t i = 0; i < 10; ++i) {
    std::cout << u(e) << std::endl;
  }

  std::uniform_real_distribution<double> u2(0, 1);
  for (size_t i = 0; i < 10; ++i) {
    std::cout << u2(e) << std::endl;
  }

  std::normal_distribution<> n(4, 1.5);
  std::vector<unsigned> vals(9);

  for (size_t i = 0; i != 200; ++i) {
    unsigned v = std::lround(n(e));

    if (v < vals.size()) {
      ++vals[v];
    }
  }
  for (size_t i = 0; i != vals.size(); ++i) {
    std::cout << i << ": " << std::string(vals[i], '*') << std::endl;
  }

  std::cout << std::boolalpha << true << " " << false << std::endl;

  std::cout << std::showbase <<std::hex<< 1024 << std::endl;
  return 0;
}