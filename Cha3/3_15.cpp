#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  vector<string> sv;
  string word = "";
  while (cin >> word) {
    sv.push_back(word);
  }
  for (auto x : sv) {
    cout << x << '\t';
  }
  decltype(sv.size()) s = sv.size();
  std::cout << std::endl;

  return 0;
}