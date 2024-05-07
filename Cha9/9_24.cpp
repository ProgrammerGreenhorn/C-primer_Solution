#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
  vector<int> v;
  cout << v.at(0) << std::endl;
  cout << v[0] << std::endl;
  cout << *v.begin() << std::endl;
  cout << v.front() << std::endl;
  return 0;
}