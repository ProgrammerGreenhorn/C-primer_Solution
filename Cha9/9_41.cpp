#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
int main() {
  vector<char> vec{'a', 'b', 'c'};
  string s(vec.cbegin(), vec.cend());
  std::cout << s << std::endl;
}