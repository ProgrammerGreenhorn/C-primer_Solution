#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> v1(10, 42);
  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  vector<int> v3;
  for (unsigned i = 0; i < 10; i++) {
    v3.push_back(42);
  }
  cout << v1.size() << '\t' << v2.size() << '\t' << v3.size() << endl;
  return 0;
}