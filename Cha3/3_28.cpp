
#include <iostream>
#include <string>
std::string sa[10]; // ''
int ia[10];         // 0

int main() {
  std::string sa2[10]; // ''

  int ia2[10]; // undefined behavior

  for (auto x : sa) {
    std::cout << x << std::endl;
  }
  for (auto x : ia) {
    std::cout << x << std::endl;
  }
  for (auto x : sa2) {
    std::cout << x << std::endl;
  }
  for (auto x : ia2) {
    std::cout << x << std::endl;
  }
}