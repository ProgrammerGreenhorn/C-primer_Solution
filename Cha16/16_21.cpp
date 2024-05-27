#include <iostream>
#include <memory>
#include <ostream>
class debugDelete {
public:
  debugDelete(std::ostream &_os = std::cout) : os(_os){};

  template <typename T> void operator()(T *pointer) const {
    std::cout << "delete unique_str" << std::endl;
    delete pointer;
  }

private:
  std::ostream &os;
};

int main() {
  debugDelete d;
  double *p = new double(2.0);
  d(p);
  int *ip = new int;
  debugDelete()(ip);

  std::unique_ptr<int,debugDelete> p2(new int,debugDelete());

  std::unique_ptr<std::string,debugDelete> p3(new std::string,debugDelete());
}