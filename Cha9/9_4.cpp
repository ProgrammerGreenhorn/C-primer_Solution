#include <cstdlib>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
bool find_val(vector<int>::const_iterator &&beg,
              vector<int>::const_iterator &&en, const int &val) {
  bool flag = false;
  while (beg != en) {
    if (*beg == val) {
      flag = true;
      break;
    }
    ++beg;
  }
  return flag;
}

int main(int argc, char **argv) {
  vector<int> vec{1, 2, 3, 4, 5};
  int val = atoi(argv[1]);
  bool flag = find_val(vec.cbegin(), vec.cend(), val);
  if (flag) {
    cout << "find" << endl;
  } else {
    cout << "can not find" << endl;
  }
  return 0;
}