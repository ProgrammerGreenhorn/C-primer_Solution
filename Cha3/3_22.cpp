#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> text = {"hello,", "students", "", "a sky full of stars"};
  for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {
    for (auto &c : *it) {
      c = toupper(c);
    }
    cout << *it;
  }
  cout << endl;
  return 0;
}