#include <iostream>
class ifThenElse {
public:
  int operator()(const bool _1, const int _2, const int _3) {
    return _1 ? _2 : _3;
  }
};

int main() {
  ifThenElse ite;
  std::cout << ite(1, 2, 3) << std::endl;
}