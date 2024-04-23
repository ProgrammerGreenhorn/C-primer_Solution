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
  vector<string> sv;
  string word;

  while (cin >> word) {
    sv.push_back(word);
  }
  cout << "before convert" << endl;
  for (auto x : sv) {
    cout << x << std::endl;
  }

  for (auto &x : sv) {
    for (auto &c : x) {
      c = toupper(c);
    }
  }
  cout << "after convert" << endl;
  for (auto x : sv) {
    cout << x << std::endl;
  }

  return 0;
}