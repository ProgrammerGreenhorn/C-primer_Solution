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
  vector<int> iv;
  int number;
  while (cin >> number) {
    iv.push_back(number);
  }

  for (auto it = iv.begin(); it != iv.end() - 1; it++) {
    cout << *it + *(it + 1) << '\t';
  }
  cout << endl;

  for (auto it = iv.begin(), eit = iv.end() - 1; it <= eit; it++, eit--) {
    cout << *it + *eit << '\t';
  }
  cout << endl;
}