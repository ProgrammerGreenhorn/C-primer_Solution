#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using std::cout;
using std::endl;
using std::list;
using std::vector;

int main() {
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  vector<int> vec(std::begin(ia), std::end(ia));
  list<int> lst(std::begin(ia), std::end(ia));

  auto vec_it = vec.begin();
  auto lst_it = lst.begin();
  while (vec_it != vec.end()) {
    if (*vec_it % 2 == 0) {
      vec_it = vec.erase(vec_it);
    } else {
      ++vec_it;
    }
  }
  for (auto x : vec) {
    cout << x << endl;
  }
  std::cout << "-----------" << endl;
  while (lst_it != lst.end()) {
    if (*lst_it % 2 != 0) {
      lst_it = lst.erase(lst_it);
    } else {
      ++lst_it;
    }
  }
  for (auto x : lst) {
    cout << x << endl;
  }
}