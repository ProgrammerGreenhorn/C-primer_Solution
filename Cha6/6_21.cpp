#include <cstdlib>
#include <iostream>
#include <stdexcept>
int func(const int &a, const int *b) { return a > *b ? a : *b; }

int main(int argc, char **argv) {
  try {
    if (argc != 3) {
      throw std::runtime_error("no parameters!");
    }
    int i = atoi(argv[1]), j = atoi(argv[2]);
    std::cout << func(i, &j) << std::endl;
    return 0;
  } catch (std::runtime_error &err) {
    std::cout << err.what() << std::endl;
    ;
  }
}