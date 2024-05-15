#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
using std::map;
using std::string;
map<string, string> build_map(std::ifstream &map_file) {
  map<string, string> word_map;
  string key, value;

  // the first word is the key , and the remains are value
  while (map_file >> key && std::getline(map_file, value)) {
    if (value.size() > 1) {
      // remove the space
      word_map[key] = value.substr(1);
    } else {
      throw std::runtime_error("no rule for the key");
    }
  }
  return word_map;
}
string &transform(string &s, map<string, string> &word_map) {
  if (word_map.find(s) != word_map.end()) {
    return word_map[s];
  }
  return s;
}
void word_transform(std::ifstream &map_file, std::ifstream &input_file) {
  auto word_map = build_map(map_file);
  string text;
  // get a whole hang
  while (std::getline(input_file, text)) {
    // bind the hang to a stringstream
    std::istringstream istr(text);
    string word;
    bool first_word = true;
    while (istr >> word) {
      if (first_word) {
        first_word = false;
      } else {
        std::cout << " ";
      }
      std::cout << transform(word, word_map);
    }
    std::cout << std::endl;
  }
}

int main(int argc, char **argv) {
  std::ifstream map_file(argv[1]), input_file(argv[2]);

  word_transform(map_file, input_file);

  return 0;
}
