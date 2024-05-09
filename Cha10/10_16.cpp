#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
void print_vec(const std::vector<std::string> &sv) {
  for (const auto &x : sv) {
    std::cout << x << "\t";
  }
  std::cout << std::endl;
}

void elimDups(std::vector<std::string> &sv) {
  std::sort(sv.begin(), sv.end());
  std::cout << "After Sort:" << std::endl;
  print_vec(sv);
  auto slow = sv.begin(), fast = sv.begin() + 1;
  while (fast != sv.end()) {
    if (*fast != *slow) {
      ++slow;
      *slow = *fast;
    }
    ++fast;
  }
  std::cout << "After Unique:" << std::endl;
  print_vec(sv);
  ++slow;
  sv.erase(slow, sv.end());
  std::cout << "After Erase:" << std::endl;
  print_vec(sv);
}
bool is_shorter(const std::string &s1, const std::string &s2) {
  return s1.size() < s2.size();
}
void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz) {
  elimDups(words);
  std::stable_sort(words.begin(), words.end(), is_shorter);

  auto wc = std::find_if(words.begin(), words.end(),
                         [sz](const std::string &s) { return s.size() >= sz; });
  std::for_each(wc, words.end(),
                [](const std::string &s) { std::cout << s << " "; });
  std::cout << std::endl;
}

int main() {
  std::vector<std::string> sv{"the",  "quick", "red",  "fox", "jumps",
                              "over", "the",   "slow", "red", "turtle"};
  print_vec(sv);
  biggies(sv, 5);

  return 0;
}