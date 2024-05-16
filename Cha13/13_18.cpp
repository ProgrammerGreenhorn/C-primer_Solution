#include <iostream>
#include <string>
class Employee {
public:
  static int n;
  // cons
  Employee() : name(""), no(n++){};
  Employee(const std::string &s) : name(s), no(n++){};

  // stop copy
  Employee(const Employee &) = delete;

  // stop  =
  Employee &operator=(const Employee &) = delete;
  std::string name;
  int no;
};

int Employee::n = 0;

int main() {
  Employee e1("tang"), e2("wang");

  // wrong
  // Employee e3 = e2;
  std::cout << e1.name << " :" << e1.no << std::endl
            << e2.name << " :" << e2.no << std::endl;

  return 0;
}