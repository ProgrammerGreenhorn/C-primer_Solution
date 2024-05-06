#include <fstream>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> &func(const std::string &file_name,
                               std::vector<std::string> &str_vec) {
  std::string str{""};
  std::ifstream ifs(file_name, std::ios::in);
  if (ifs) {
    while (std::getline(ifs, str)) {
      str_vec.push_back(str);
    }
  } else {
    std::cerr << "could not open" << std::endl;
  }

  ifs.close();
  return str_vec;
}

int main(int argc, char **argv) {
  std::vector<std::string> vec;
  std::string file(argv[1]);
  func(file, vec);
  for (auto s : vec) {
    std::cout << s << std::endl;
  }
  std::cout << vec.size() << std::endl;
  return 0;
}