#include <iostream>
#include <ostream>
#include <string>
class Base {
public:
  Base() = default;
  Base(const std::string &s) : basename(s){};
  std::string name() { return basename; }
  virtual void print(std::ostream &os) { os << basename; }

private:
  std::string basename;
};

class derived : public Base {
public:
  derived(const std::string &s, int _i) : Base(s), i(_i){};
  void print(std::ostream &os) override {
    Base::print(os);
    os << " " << i;
  };

private:
  int i;
};

int main() {
  derived d("hello", 1);
  d.print(std::cout);
}