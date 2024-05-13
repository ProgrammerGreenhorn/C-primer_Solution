#include <iostream>
#include <map>
#include <string>
int main() {
  std::multimap<std::string, std::string> author_work{
      {"Yuhua", "Huo Zhe"},  {"DaLiu", "San Ti"},  {"Mo Yan", "Hong Gao Liang"},
      {"DaLiu", "Her Eyes"}, {"Yuhua", "Mai Xue"}, {"Shi Tieshen", "Hao le"}};

  // equal_range return a pair(lowwer_bound,up_bound)
  for (auto range = author_work.equal_range("Yuhua");
       range.first != range.second; ++range.first) {
    if ((range.first)->second == "Huo Zhe") {
      author_work.erase(range.first);
    }
  }
  for (auto x : author_work) {
    std::cout << x.first << " : " << x.second << std::endl;
  }
  return 0;
}