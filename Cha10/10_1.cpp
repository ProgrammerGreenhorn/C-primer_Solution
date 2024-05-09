#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using std::cin;
using std::vector;
int main(int argc, char **argv) {
  int val;
  vector<int> vec;
  while (cin >> val) {
    vec.push_back(val);
  }
  auto c = std::count(vec.cbegin(), vec.cend(), atoi(argv[1]));
  std::cout << c << std::endl;
}