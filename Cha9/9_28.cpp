#include <forward_list>
#include <iostream>
#include <string>
using std::forward_list;
using std::string;

void insert_lst(forward_list<string> &f_lst, const string &s1,
                const string &s2) {
  forward_list<string>::iterator prev = f_lst.before_begin();
  forward_list<string>::iterator curr = f_lst.begin();

  while (curr != f_lst.end()) {
    if (*curr == s1) {
      curr = f_lst.insert_after(curr, s2);
      break;
    } else {
      prev = curr;
      ++curr;
    }
  }
  if (curr == f_lst.end()) {
    f_lst.insert_after(prev, s2);
  }
  return;
}

int main() {
  forward_list<string> lst{"hello", "sdad", "dsf"};
  insert_lst(lst, "hello", "world");
  for (auto x : lst) {
    std::cout << x << std::endl;
  }

  std::cout << "-----------" << std::endl;

  insert_lst(lst, "sd", "end");
  for (auto x : lst) {
    std::cout << x << std::endl;
  }
}