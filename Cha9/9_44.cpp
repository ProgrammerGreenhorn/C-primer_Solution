#include <iostream>
#include <string>
using std::string;

auto func(string &s, const string &old_val, const string &new_val) -> void {
  string::size_type i = 0;
  string::size_type old_size = old_val.size();
  while ((s.size() - i) >= old_size) {
    string temp = s.substr(i, old_size);
    if (temp == old_val) {
      // start from i,replace old_size chars with new_val
      s.replace(i, old_size, new_val);
      i += new_val.size();
    } else {
      ++i;
    }
  }
  return;
}

int main() {
  string s{"tho sdadas tho s dadas tho s tho"};
  func(s, "tho", "throught");
  std::cout << s << std::endl;
  return 0;
}