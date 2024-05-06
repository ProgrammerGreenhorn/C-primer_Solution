#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
int main(int argc, char **argv) {
  std::ifstream ifs(argv[1], std::ifstream::in);
  std::string line, word;
  std::vector<std::string> vec;
  if (ifs) {
    while (std::getline(ifs, line)) {
      vec.push_back(line);
    }
  }
  for (auto x : vec) {
    std::cout << x << std::endl;
    std::istringstream istr(x);
    while (istr >> word) {
      std::cout << word << "\t";
    }
    std::cout << std::endl;
  }

  return 0;
}
