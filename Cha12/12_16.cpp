#include <memory>
using std::unique_ptr;

int main() {
  unique_ptr<int> p(new int(42));
  unique_ptr<int> p2;
  // wrong,can not assing or copy
  //  p2 = p;
  // unique_ptr<int> p3(p);

  // right release p and give it to p4
  unique_ptr<int> p4(p.release());
}