#include <cstdlib>
#include <iostream>
int odd[5] = {1, 3, 5, 7, 9};
int even[5] = {2, 4, 6, 8, 10};

int (&arrptr(int i))[5] { return i % 2 == 0 ? odd : even; }

int main(int argc, char **argv) {
  int i = atoi(argv[1]);

  int(&j)[5] = arrptr(i);

  for (auto x : j) {
    std::cout << x << std::endl;
  }
}