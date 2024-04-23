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
  vector<int> scores(11, 0);
  unsigned score = 0;
  while (cin >> score) {
    if (score <= 100) {
      // die dai qi pian yi
      auto it = scores.begin();
      it += score / 10;
      (*it)++;
    }
  }
  for (auto x : scores) {
    cout << x << '\t';
  }
  cout << endl;
}