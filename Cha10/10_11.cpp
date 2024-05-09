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
int main() {
  std::vector<std::string> sv{"the",  "quick", "red",  "fox", "jumps",
                              "over", "the",   "slow", "red", "turtle"};
  print_vec(sv);
  elimDups(sv);
  std::stable_sort(sv.begin(), sv.end(), is_shorter);
  std::cout << "After Stable Sort" << std::endl;
  print_vec(sv);

  return 0;
}