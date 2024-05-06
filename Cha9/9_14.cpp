#include <iostream>
#include <list>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main() {
  list<const char *> lst{"2323", "23232"};
  vector<string> vec;

  vec.assign(lst.cbegin(), lst.cend());

  for (auto x : vec) {
    cout << x << endl;
  }
  return 0;
}