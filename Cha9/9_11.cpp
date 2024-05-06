#include <vector>
using std::vector;

int main() {
  vector<int> vec1;

  vector<int> vec2(vec1);

  vector<int> vec3 = vec1;

  vector<int> vec4{1, 2, 3, 4};

  vector<int> vec5 = {1, 2, 3, 4};

  vector<int> vec6(vec4.cbegin(), vec4.cend());

  vector<int> vec7(7, 1);

  vector<int> vec8(7);
}