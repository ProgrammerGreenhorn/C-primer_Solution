#include <cstddef>
#include <iostream>
#include <map>
#include <string>
int main() {
  std::map<std::string, size_t> word_count;
  std::string word;

  while (std::cin >> word) {
    ++word_count.insert({word, 0}).first->second;
  }
  return 0;
}