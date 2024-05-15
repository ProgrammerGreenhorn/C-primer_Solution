#include <iostream>
#include <memory>
#include <vector>
using std::shared_ptr;
using std::vector;

shared_ptr<vector<int>> dynamic_vector() {
  return std::make_shared<vector<int>>();
}

void cin_vector(std::istream &is, shared_ptr<vector<int>> vp) {
  int i;
  while (is >> i) {
    vp->push_back(i);
  }
}

void print_vector(shared_ptr<vector<int>> vp) {
  for (auto x : *vp) {
    std::cout << x << std::endl;
  }
}

int main() {
  shared_ptr<vector<int>> vp = dynamic_vector();
  cin_vector(std::cin, vp);
  print_vector(vp);
  return 0;
}
