
#include <iostream>
#include <istream>
#include <vector>
using std::vector;

vector<int> *dynamic_vector() { return new vector<int>(); }

void cin_vector(std::istream &is, vector<int> *vec) {
  int i;
  while (is >> i) {
    vec->push_back(i);
  }
}

void print_vector(vector<int> *vec) {
  for (auto x : *vec) {
    std::cout << x << std::endl;
  }
}

int main() {
  vector<int> *vp = dynamic_vector();
  cin_vector(std::cin, vp);
  print_vector(vp);
  delete vp;
  return 0;
}
