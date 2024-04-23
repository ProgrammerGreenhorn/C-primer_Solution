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
  vector<int> vec(10, 42);
  for (auto it = vec.cbegin(); it != vec.cend(); it++) {
    cout << *it << endl;
  }
  return 0;
}