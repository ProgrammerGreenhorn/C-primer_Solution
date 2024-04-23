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
  vector<int> vec1;
  for (unsigned i = 0; i < 10; i++) {
    vec1.push_back(i);
  }
  for (auto x : vec1) {
    cout << x << '\t';
  }
  cout << endl;

  for (auto it = vec1.begin(); it != vec1.end(); it++) {
    *it *= 2;
  }
  for (auto x : vec1) {
    cout << x << '\t';
  }
  cout << endl;
}