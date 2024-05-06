#include <cstdlib>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
auto find_val(vector<int>::const_iterator &&beg,
              vector<int>::const_iterator &&en, const int &val)
    -> vector<int>::const_iterator & {
  while (beg != en) {
    if (*beg == val) {
      break;
    }
    ++beg;
  }
  return beg;
}

int main(int argc, char **argv) {
  vector<int> vec{1, 2, 3, 4, 5};
  int val = atoi(argv[1]);
  auto it = find_val(vec.cbegin(), vec.cend(), val);
  if (it == vec.cend()) {
    cout << "not find" << endl;
  } else {
    cout << *it << " "
         << "find" << endl;
  }
  return 0;
}