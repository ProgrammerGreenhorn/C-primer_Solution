#include <iostream>
int main() {
  int i = 0;
  // wrong
  //  if(42 = i){

  // }
  if (i = 42) {
    std::cout << "hello" << std::endl;
  }
}