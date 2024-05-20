#include <algorithm>
#include <iostream>
#include <vector>
class ifEqual {
public:
  ifEqual(int _j) : j(_j){};
  bool operator()(int i) { return i == j; }

private:
  int j;
};

int main() {
  // this object is used to check whether a value is 2
  ifEqual ieq(2);
  std::vector<int> vec{1, 2, 3, 2, 4, 2, 5, 6};
  std::replace_if(vec.begin(), vec.end(), ieq, 8);

  for (auto x : vec) {
    std::cout << x << std::endl;
  }
}