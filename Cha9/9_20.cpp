#include <deque>
#include <iostream>
#include <list>
using std::deque;
using std::list;

int main() {
  list<int> lst{1, 2, 3, 4, 5, 6};
  deque<int> odd_deq, even_deq;
  auto lst_begin = lst.begin(), lst_end = lst.end();

  while (lst_begin != lst_end) {
    if (*lst_begin % 2 == 0) {
      odd_deq.push_back(*lst_begin);
    } else {
      even_deq.push_back(*lst_begin);
    }
    ++lst_begin;
  }
  for (auto x : odd_deq) {
    std::cout << x << std::endl;
  }
  std::cout << "-----------------" << std::endl;
  for (auto x : even_deq) {
    std::cout << x << std::endl;
  }
  return 0;
}