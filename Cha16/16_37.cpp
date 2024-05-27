#include <algorithm>
#include <type_traits>
int main() {
  int i = 2;
  double d = 4;
  std::max<double>(i, d);
  std::max<int>(i, d);

  std::remove_reference<int &>::type a = 0;
}