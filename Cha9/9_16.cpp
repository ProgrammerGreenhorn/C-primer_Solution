#include <iostream>
#include <list>
#include <vector>
using std::list;
using std::vector;
bool lst_vec_qeual(list<int> lst, vector<int> vec) {
  auto lst_begin = lst.cbegin(), lst_end = lst.cend();
  auto vec_begin = vec.cbegin(), vec_end = vec.cend();
  while (lst_begin != lst_end && vec_begin != vec_end) {
    if (*lst_begin != *vec_begin) {
      break;
    }
    ++lst_begin;
    ++vec_begin;
  }
  if (lst_begin != lst_end || vec_begin != vec_end) {
    return false;
  }
  return true;
}

int main() {
  list<int> lst{1, 2, 3};
  vector<int> vec{
      1,
      2,
      3,
  };
  bool flag = lst_vec_qeual(lst, vec);
  if (flag) {
    std::cout << "equal" << std::endl;
  } else {
    std::cout << "not equal" << std::endl;
  }
  return 0;
}
