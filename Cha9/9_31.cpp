#include <forward_list>
#include <iostream>
#include <list>
using std::forward_list;
using std::list;

// list
void func_list(list<int> &lst) {
  list<int>::iterator it = lst.begin();
  while (it != lst.end()) {
    if (*it % 2) {
      // copy the odd
      it = lst.insert(it, *it);
      ++it;
      ++it;
    } else {
      // remove the even
      it = lst.erase(it);
    }
  }
  return;
}

// forward_list
void func_fw_list(forward_list<int> &fw_lst) {
  forward_list<int>::iterator prev = fw_lst.before_begin();
  forward_list<int>::iterator curr = fw_lst.begin();

  while (curr != fw_lst.end()) {
    if (*curr % 2) {
      // insert after curr ,and then curr point to the new element
      // then assign curr to prev ,and ++prev to let it point to
      // the ordinay next element
      curr = fw_lst.insert_after(curr, *curr);
      prev = curr;
      ++curr;
    } else {
      curr = fw_lst.erase_after(prev);
    }
  }
  return;
}

int main() {
  list<int> lst{1, 2, 3, 4, 5};
  func_list(lst);
  for (auto x : lst) {
    std::cout << x << std::endl;
  }
  std::cout << "-----------------" << std::endl;
  forward_list<int> fw_lst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  func_fw_list(fw_lst);
  for (auto x : fw_lst) {
    std::cout << x << std::endl;
  }
  return 0;
}