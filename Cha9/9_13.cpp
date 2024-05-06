#include <iostream>
#include <list>
#include <vector>
using std::cout;
using std::endl;
using std::list;
using std::vector;
int main() {
  list<int> int_lst{1, 2, 3};
  vector<double> double_vec1(int_lst.cbegin(), int_lst.cend());
  vector<int> int_vec{1, 2, 3, 4};
  vector<double> double_vec2(int_vec.cbegin(), int_vec.cend());
  for (auto x : double_vec1) {
    cout << x << endl;
  }
  for (auto x : double_vec2) {
    cout << x << endl;
  }
  return 0;
}