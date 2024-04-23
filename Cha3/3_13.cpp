#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  // 0
  vector<int> v1;
  // 10 ge 0
  vector<int> v2(10);
  // 10 ge 42
  vector<int> v3(10, 42);
  // 1 ge 10
  vector<int> v4{10};
  // 10  42
  vector<int> v5{10, 42};
  // 10 ge ""
  vector<string> v6{10};
  // 10 ge "hi"
  vector<string> v7{10, "hi"};
}