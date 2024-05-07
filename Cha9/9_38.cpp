#include <iostream>
#include <vector>
using std::vector;

int main() {
  vector<int> v;
  std::cout << v.size() << std::endl << v.capacity() << std::endl;

  for (vector<int>::size_type i = 0; i != 24; ++i) {
    v.push_back(i);
  }
  std::cout << v.size() << std::endl << v.capacity() << std::endl;

  // set the capacity at least to 50
  v.reserve(50);
  std::cout << v.size() << std::endl << v.capacity() << std::endl;

  // give back the memory that beyond size
  v.shrink_to_fit();
  std::cout << v.size() << std::endl << v.capacity() << std::endl;
  return 0;
}