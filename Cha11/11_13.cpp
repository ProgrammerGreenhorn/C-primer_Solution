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
  vector<pair<string, int>> vec, vec2, vec3;
  while (std::cin >> word >> count) {
    // three ways to create a pair;
    vec.push_back({word, count});
    vec2.push_back(pair<string, int>{word, count});
    vec3.push_back(std::make_pair(word, count));
  }

  for (auto x : vec) {
    std::cout << x.first << " : " << x.second << std::endl;
  }
  std::cout << "-------------" << std::endl;
  for (auto x : vec2) {
    std::cout << x.first << " : " << x.second << std::endl;
  }
  std::cout << "-------------" << std::endl;
  for (auto x : vec3) {
    std::cout << x.first << " : " << x.second << std::endl;
  }
  return 0;
}