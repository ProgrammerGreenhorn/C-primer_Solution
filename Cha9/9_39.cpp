#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {

  vector<string> v;
  v.reserve(1024);
  string word;
  while (cin >> word) {
    v.push_back(word);
  }
  v.resize(v.size() + v.size() / 2);
}