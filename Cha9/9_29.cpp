#include <vector>
using std::vector;

int main() {
  vector<int> vec(50, 0);
  vec.resize(100);
  vec.resize(10);
  return 0;
}