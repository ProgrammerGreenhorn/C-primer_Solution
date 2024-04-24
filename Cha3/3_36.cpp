#include <iostream>
#include <iterator>
#include <vector>
int main() {
  int arr1[4]{1, 2, 3, 4};
  int arr2[5]{1, 2, 3, 4, 5};
  bool flag = true;
  auto p1 = std::begin(arr1), ep1 = std::end(arr1), p2 = std::begin(arr2),
       ep2 = std::end(arr2);
  for (; p1 != ep1 && p2 != ep2; p1++, p2++) {
    if (*p1 != *p2) {
      flag = false;
    }
  }
  if (flag && p1 == ep1 && p2 == ep2) {
    std::cout << "arr1 == arr2" << std::endl;
  } else {
    std::cout << "arr1 != arr2" << std::endl;
  }

  std::vector<int> vec1{1, 2, 3, 4};
  std::vector<int> vec2{1, 2, 3, 4, 5};

  // vector can use == to check
  if (vec1 == vec2) {
    std::cout << "vec1 == vec2" << std::endl;
  } else {
    std::cout << "vec1 != vec2" << std::endl;
  }
  return 0;
}