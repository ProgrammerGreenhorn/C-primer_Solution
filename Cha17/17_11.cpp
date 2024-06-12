
#include <bitset>
#include <cstddef>
#include <iostream>
#include <string>
template <unsigned N> class Quiz {
public:
  Quiz(const std::string &s) : bitvec(s){};
  Quiz(unsigned long long ull) : bitvec(ull){};

  void update(std::size_t no, int ans) { bitvec.set(no, ans); }

  std::bitset<N> bitvec;
};

int main() {
  Quiz<10> q(32);
  std::cout << q.bitvec << std::endl;
  q.update(0, 1);
  std::cout << q.bitvec << std::endl;
  q.bitvec.flip();
   std::cout << q.bitvec << std::endl;
}