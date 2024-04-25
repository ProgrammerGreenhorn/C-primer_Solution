#include <string>
int main() {
  int i;
  double d;
  const std::string *ps;
  char *pc;
  void *pv;

  // first get rid of const, then static cast
  pv = static_cast<void *>(const_cast<std::string *>(ps));

  i = static_cast<int>(*pc);

  pv = static_cast<void *>(&d);

  pc = static_cast<char *>(pv);
}