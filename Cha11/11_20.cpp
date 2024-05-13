#include <cstddef>
#include <iostream>
#include <map>
#include <string>
#include <utility>
int main() {
  std::map<std::string, size_t> word_count;
  std::string word;

  while (std::cin >> word) {
    // insert return a pair(iterator,bool);bool tells whethter insert success
    // iterator point to the new inserted element;
    auto ret = word_count.insert({word, 1});
    if (!ret.second) {
      ++((ret.first)->second);
    }
  }

  for (std::pair<std::string, size_t> p : word_count) {
    std::cout << p.first << " : " << p.second << std::endl;
  }
}