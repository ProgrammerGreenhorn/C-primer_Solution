#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
int main(int argc, char **argv) {
  std::ifstream ifs(argv[1], std::ifstream::in);
  if (ifs) {
    std::istream_iterator<std::string> ifs_it(ifs), eof;

    // use iterator to init a vec;
    std::vector<std::string> svec(ifs_it, eof);
    for (auto x : svec) {
      std::cout << x << std::endl;
    }
  } else {
    std::cout << "error" << std::endl;
  }
  return 0;
}