
#include <vector>
int main() {
  int arr[10] = {};
  for (unsigned i = 0; i < 10; i++) {
    arr[i] = i;
  }
  int arr2[10] = {};
  for (unsigned i = 0; i < 10; i++) {
    arr2[i] = arr[i];
  }
  std::vector<int> vec;
  for (unsigned i = 0; i < 10; i++) {
    vec.push_back(i);
  }
  std::vector<int> vec2(vec);
  return 0;
}