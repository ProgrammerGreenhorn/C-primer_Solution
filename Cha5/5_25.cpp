#include <iostream>
#include <stdexcept>
int main(int argc, char **argv) {
  int a = 0, b = 0;
  while (std::cin >> a >> b) {
    try {
      if (b == 0) {
        throw std::runtime_error("Division by zero is not allowed!\n");
      }
      std::cout << a / b << std::endl;
    } catch (const std::runtime_error &err) {
      std::cout << err.what() << "Try again? Press y or n" << std::endl;
      char c;
      std::cin >> c;
      if (!c || c == 'n') {
        std::cout << "You have exited" << std::endl;
        break;
      }
    }
  }
  return 0;
}