#include <iostream>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int i = 0, j = 1;
  int *pi = &i, *pj = &j;

  swap(pi, pj);
  std::cout << *pi << " " << *pj << std::endl;
}