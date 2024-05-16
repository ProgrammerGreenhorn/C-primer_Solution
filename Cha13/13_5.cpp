#include <string>
using std::string;
class hasPtr {
public:
  // constructor
  hasPtr(const std::string &s = std::string()) : ps(new string(s)), i(0){};

  // copy
  hasPtr(const hasPtr &);

  //=
  hasPtr &operator=(const hasPtr &);

  // destrcuctor
  ~hasPtr();

private:
  std::string *ps;
  int i;
};

// copy
hasPtr::hasPtr(const hasPtr &hp) : ps(new string(*(hp.ps))), i(hp.i) {}

//=
hasPtr &hasPtr::operator=(const hasPtr &hp) {
  this->ps = new string(*(hp.ps));
  this->i = hp.i;
  return *this;
}

// destructor
hasPtr::~hasPtr() { delete this->ps; }

int main() { return 0; }