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
  for (decltype(iv.size()) i = 0; i < iv.size() - 1; i++) {
    std::cout << iv[i] + iv[i + 1] << endl;
  }
  std::cout << "------------------------" << std::endl;
  for (decltype(iv.size()) i = 0, j = iv.size() - 1; i <= j; i++, j--) {
    std::cout << iv[i] + iv[j] << endl;
  }
}