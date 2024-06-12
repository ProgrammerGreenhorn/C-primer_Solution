#include <bitset>
#include <iostream>
#include <vector>
int main() {
  std::vector<int> v{1, 2, 3, 5, 8, 13, 21};
  std::bitset<32> bitvec;
  for (const auto &x : v) {
    bitvec.set(x);
  }
  std::cout << bitvec << std::endl;
}