#include <forward_list>
#include <iostream>
using std::forward_list;

int main() {
  forward_list<int> f_lst{1, 2, 3, 4, 5};

  // in order to remove a element in forward_list,
  // we need to keep track of the one who in front of it;
  auto prev = f_lst.before_begin();
  forward_list<int>::iterator curr = f_lst.begin();

  while (curr != f_lst.end()) {
    if (*curr % 2) {
      // erase_after() return the one are behind the removed element
      curr = f_lst.erase_after(prev);
    } else {
      prev = curr;
      ++curr;
    }
  }
  for (auto x : f_lst) {
    std::cout << x << std::endl;
  }
}