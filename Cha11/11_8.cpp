#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using std::string;
using std::unordered_set;
using std::vector;

int main() {
  string word;
  vector<string> words;
  unordered_set<string> words_set;
  while (std::cin >> word) {
    if (std::find(words.begin(), words.end(), word) == words.end()) {
      words.push_back(word);
    }
    words_set.insert(word);
  }

  for (auto w : words) {
    std::cout << w << std::endl;
  }
  for (auto w : words_set) {
    std::cout << w << std::endl;
  }
  return 0;
}