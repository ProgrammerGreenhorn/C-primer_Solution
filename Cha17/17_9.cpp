#include <bitset>
#include <iostream>
#include <string>
int main() {
  std::bitset<64> bitvec(32);
  std::bitset<32> bv(1010101);
  std::string bstr;
  std::cin >> bstr;
  std::bitset<8> bv2(bstr);

  std::cout << bitvec.size() << " " << bv.size() << " " << bv2.size()
            << std::endl;
  std::cout << bitvec.any() << " " << bv.any() << " " << bv2.any() << std::endl;
  return 0;
}