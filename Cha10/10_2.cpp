#include <algorithm>
#include <iostream>
#include <list>
#include <string>
using std::cin;
using std::list;
using std::string;
int main(int argc, char **argv) {
  string val;
  list<string> vec;
  while (cin >> val) {
    vec.push_back(val);
  }
  auto c = std::count(vec.cbegin(), vec.cend(), argv[1]);
  std::cout << c << std::endl;
}