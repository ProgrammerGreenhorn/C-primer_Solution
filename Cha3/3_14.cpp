#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  vector<int> iv;
  int number = 0;
  while (cin >> number) {
    iv.push_back(number);
  }
  for (auto x : iv) {
    cout << x << "\t";
  }
  cout << std::endl;
  decltype(iv.size()) s = iv.size();
  cout << s << std::endl;

  return 0;
}