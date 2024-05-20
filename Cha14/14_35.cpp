#include <iostream>

#include <string>
#include <vector>
class readMessage {
public:
  readMessage(std::istream &_is = std::cin) : is(_is){};
  std::string operator()() {
    std::string line;
    std::getline(is, line);
    if (is.good()) {
      return line;
    }
    return "";
  };

private:
  std::istream &is;
  std::string mes;
};

int main() {
  readMessage rme;
  std::string s = rme();
  std::vector<std::string> vec;

  while (s != "") {
    vec.push_back(s);
    s = rme();
  }

  for (auto x : vec) {
    std::cout << x << std::endl;
  }
  return 0;
}