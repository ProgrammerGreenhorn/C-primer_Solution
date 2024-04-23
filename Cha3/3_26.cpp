#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char **argv) {
  vector<int> vec1;
  for (int i = 0; i < 50; i++) {
    vec1.push_back(i);
  }
  int sought = atoi(argv[1]);
  auto beg = vec1.begin(), en = vec1.end() - 1;
  auto mid = beg + (en - beg) / 2;

  while (beg <= en && *mid != sought) {
    if (*mid > sought) {
      en = mid - 1;
    } else {
      beg = mid + 1;
    }
    mid = beg + (en - beg) / 2;
  }
  // the second flag to avoid out of range(negetive num)
  if (mid != vec1.end() && en >= vec1.begin()) {
    cout << *mid << '\t' << "finish sought" << std::endl;
  } else {
    cout << "can not find" << std::endl;
  }
}