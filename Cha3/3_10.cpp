#include <cctype>
#include <iostream>
#include <string>
int main() {
  std::string s, res;
  std::cin >> s;

  for (auto x : s) {
    if (ispunct(x))
      continue;
    res += x;
  }
  std::cout << res << std::endl;

  const std::string ss = "keep out";
  for (auto &s : ss) {
    std::cout << s;
  }
  std::cout<<std::endl;
  return 0;
}