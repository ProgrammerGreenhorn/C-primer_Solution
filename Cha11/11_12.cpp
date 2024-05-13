#include <iostream>
#include <string>
#include <utility>
#include <vector>
using std::pair;
using std::string;
using std::vector;

int main() {
  string word;
  int count;
  vector<pair<string, int>> vec;
  while (std::cin >> word >> count) {
    vec.push_back({word, count});
  }

  for (auto x : vec) {
    std::cout << x.first << " : " << x.second << std::endl;
  }
  return 0;
}