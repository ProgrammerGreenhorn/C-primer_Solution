#include <vector>
using std::vector;

int main() {
  vector<int> vec{1};
  auto val = *vec.begin();
  auto val2 = vec.front();
  auto last = vec.end();
  auto val3 = *(--last);
  auto val4 = vec.back();
  return 0;
}