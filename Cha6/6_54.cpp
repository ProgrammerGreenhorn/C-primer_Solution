#include <cstdlib>
#include <iostream>
#include <vector>
int func(int, int);

std::vector<decltype(func) *> vec1;

int add(int x, int y) { return x + y; }

int sub(int x, int y) { return x - y; }

int divv(int x, int y) { return x / y; }

int mul(int x, int y) { return x * y; }

int main(int argc, char **argv) {
  vec1.push_back(add);
  vec1.push_back(sub);
  vec1.push_back(divv);
  vec1.push_back(mul);

  for (auto fp : vec1) {
    std::cout << fp(atoi(argv[1]), atoi(argv[2])) << std::endl;
  }
}