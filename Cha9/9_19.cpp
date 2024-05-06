#include <iostream>
#include <list>
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;
int main() {
  string word;
  list<string> lst;
  while (cin >> word) {
    lst.push_back(word);
  }
  auto beg = lst.cbegin(), en = lst.cend();
  while (beg != en) {
    cout << *beg << endl;
    ++beg;
  }
  return 0;
}