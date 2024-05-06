#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct PersonInfo {
  std::string name;
  std::vector<std::string> phones;
};
int main() {
  std::string line, word;
  std::vector<PersonInfo> people;
  std::istringstream record;
  while (std::getline(std::cin, line)) {
    PersonInfo info;
    // need to clear
    record.clear();
    // bind record to the string object
    record.str(line);
    record >> info.name;
    while (record >> word) {
      info.phones.push_back(word);
    }
    people.push_back(info);
  }

  for (auto p : people) {
    std::cout << p.name << " ";
    for (auto p : p.phones) {
      std::cout << p << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}