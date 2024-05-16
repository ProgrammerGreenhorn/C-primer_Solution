#include <cstddef>
#include <string>
using std::string;
class hasPtr {
public:
  // constructor
  hasPtr(const std::string &s = std::string())
      : ps(new string(s)), i(0), use(new std::size_t(1)){};

  // copy
  hasPtr(const hasPtr &hp) : ps(hp.ps), i(hp.i) { ++*(hp.use); };

  //=
  hasPtr &operator=(const hasPtr &rhp) {
    // inc the right use and dec the left use;
    ++*rhp.use;
    if (--*use == 0) {
      delete ps;
      delete use;
    }
    ps = rhp.ps;
    use = rhp.use;
    i = rhp.i;
    return *this;
  };

  // destrcuctor
  ~hasPtr() {
    // only when use dec to 0 , can we remove ps and use;
    if (--*use == 0) {
      delete ps;
      delete use;
    }
  };

private:
  std::string *ps;
  int i;
  std::size_t *use;
};

int main() {
  hasPtr p1("sdsa");
  hasPtr p2 = p1;
  return 0;
}