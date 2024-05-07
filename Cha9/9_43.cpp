#include <iostream>
#include <string>
using std::string;

void func(string &s, const string &old_val, const string &new_val) {
  auto curr = s.begin();
  // while the content beweent curr and end() are enough size
  // we should not ting
  while ((s.end() - curr) >= old_val.size()) {
    string temp(curr, curr + old_val.size());
    if (temp == old_val) {
      curr = s.erase(curr, curr + old_val.size());
      curr = s.insert(curr, new_val.cbegin(), new_val.cend());
      curr = curr + new_val.size();

    } else {
      ++curr;
    }
  }
}

int main() {
  string s{"tho sdadas tho s dadas tho s tho"};
  func(s, "tho", "throught");
  std::cout << s << std::endl;
  return 0;
}