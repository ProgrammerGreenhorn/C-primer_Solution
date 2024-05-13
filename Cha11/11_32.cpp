#include <iostream>
#include <map>
#include <set>
#include <string>
int main() {
  std::multimap<std::string, std::string> author_work{
      {"Yuhua", "Huo Zhe"},  {"DaLiu", "San Ti"},  {"Mo Yan", "Hong Gao Liang"},
      {"DaLiu", "Her Eyes"}, {"Yuhua", "Mai Xue"}, {"Shi Tieshen", "Hao le"}};

  std::map<std::string, std::set<std::string>> author_order;

  for (const auto &author : author_work) {
    (author_order[author.first]).insert(author.second);
  }

  for (const auto &author : author_order) {
    std::cout << author.first << " : ";
    for (const auto &work : author.second) {
      std::cout << work << '\t';
    }
    std::cout << std::endl;
  }
  return 0;
}