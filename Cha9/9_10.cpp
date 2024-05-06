#include <vector>
using std::vector;

int main() {
  vector<int> v1;
  const vector<int> v2;
  // iterator
  auto it1 = v1.begin();
  // const_iterator
  auto it2 = v2.begin();
  // const_iterator
  auto it3 = v1.cbegin();
  // const
  auto it4 = v2.cbegin();
  return 0;
}