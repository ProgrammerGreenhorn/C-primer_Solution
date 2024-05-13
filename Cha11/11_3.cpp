#include <cctype>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_map>
using std::cin;
using std::string;
using std::unordered_map;
void tolower_and_remove_punc(string &s) {
  auto it = s.begin();
  while (it != s.end()) {
    if (std::ispunct(*it)) {
      it = s.erase(it);
    } else {
      ++it;
    }
  }
  for (auto &x : s) {
    x = std::tolower(x);
  }
}
int main() {
  std::istream_iterator<string> cin_it(cin), eof;
  unordered_map<string, size_t> word_count;
  while (cin_it++ != eof) {
    string temp(*cin_it);
    tolower_and_remove_punc(temp);
    ++word_count[temp];
  }

  for (auto p : word_count) {
    std::cout << p.first << " : " << p.second << std::endl;
  }
}