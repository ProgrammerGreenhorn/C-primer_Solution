#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using std::string;
class hasPtr {
public:
  friend void swap(hasPtr &lhs, hasPtr &rhs);
  // constructor
  hasPtr(const std::string &s = std::string()) : ps(new string(s)), i(0){};

  // copy
  hasPtr(const hasPtr &);

  //=
  hasPtr &operator=(const hasPtr &);

  //<
  bool operator<(const hasPtr &);

  // destrcuctor
  ~hasPtr();

private:
  std::string *ps;
  int i;
};

void swap(hasPtr &lhs, hasPtr &rhs) {
  using std::swap;
  // this is not a recursion because this is swap(string,string)
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);
  std::cout << "call copy()" << std::endl;
}

// copy
hasPtr::hasPtr(const hasPtr &hp) : ps(new string(*(hp.ps))), i(hp.i) {}

// operator =
hasPtr &hasPtr::operator=(const hasPtr &hp) {
  // use temp to let p1=p1 can successfully pass;
  auto temp = new std::string(*(hp.ps));
  // need to delete its own string;
  delete this->ps;
  this->ps = temp;
  this->i = hp.i;
  return *this;
}
// operator <

bool hasPtr::operator<(const hasPtr &rhs) {
  std::cout << "calling operator <()" << std::endl;
  return this->ps < rhs.ps;
}

// destructor
hasPtr::~hasPtr() { delete this->ps; }

int main() {
  hasPtr p1, p2, p3, p4;
  std::vector<hasPtr> v{p1, p2, p3, p4};
  std::sort(v.begin(), v.end());
  return 0;
}