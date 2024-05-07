#include <vector>
using std::vector;

int main() {
  vector<int> v{1, 2, 3, 4, 5, 6};
  auto iter = v.begin();
  // a infinite loop because insert() return the new element
  // and only ++iter will let the iter point to itself again
  while (iter != v.end()) {
    if (*iter % 2) {
      iter = v.insert(iter, *iter);
    }
    ++iter;
  }
  return 0;
}