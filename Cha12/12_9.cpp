#include <memory>
int main() {
  int *q = new int(42), *r = new int(100);
  // r previously point to the 100 has not been delete
  r = q;
  // r2 previously point to the 100 has  been delete
  std::shared_ptr<int> q2 = std::make_shared<int>(42),
                       r2 = std::make_shared<int>(100);
  r2 = q2;
}