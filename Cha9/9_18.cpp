#include <deque>
#include <iostream>
using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::string;
int main() {
  string word;
  deque<string> deq;
  while (cin >> word) {
    deq.push_back(word);
  }
  auto beg = deq.cbegin(), en = deq.cend();
  while (beg != en) {
    cout << *beg << endl;
    ++beg;
  }
  return 0;
}