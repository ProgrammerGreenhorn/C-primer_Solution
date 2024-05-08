#include <iostream>
#include <string>
using std::string;

string &func(string &name, const string &pre, const string &su) {
  name.insert(0, pre);
  name += su;
  return name;
}

int main() {
  string name("Tang");
  func(name, "Mr.", " Chen");
  std::cout << name << std::endl;
  return 0;
}