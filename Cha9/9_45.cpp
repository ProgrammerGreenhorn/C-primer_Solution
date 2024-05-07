#include <iostream>
#include <string>
using std::string;

string &func(string &name, const string &pre, const string &su) {
  name.insert(name.begin(), pre.cbegin(), pre.cend());
  name.append(su);
  return name;
}

int main() {
  string name("Tang");
  func(name, "Mr.", " Chen");
  std::cout << name << std::endl;
  return 0;
}