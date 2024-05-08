#include <iostream>
#include <string>
#include <vector>
auto find_number1(const std::string &s) -> void {
  std::string numbers("0123456789");

  std::string::size_type pos = 0;

  std::vector<std::string::size_type> index_vec;
  while ((pos = s.find_first_of(numbers, pos)) != std::string::npos) {
    index_vec.push_back(pos);
    ++pos;
  }
  for (auto x : index_vec) {
    std::cout << x << std::endl;
  }
}
auto find_number2(const std::string &s) -> void {
  std::string numbers("0123456789");

  std::string::size_type pos = s.size();

  std::vector<std::string::size_type> index_vec;
  while ((pos = s.find_last_of(numbers, pos)) != std::string::npos) {
    index_vec.push_back(pos);
    --pos;
  }
  for (auto x : index_vec) {
    std::cout << x << std::endl;
  }
}
auto find_digits1(const std::string &s) -> void {
  std::string numbers("0123456789");

  std::string::size_type pos = 0;

  std::vector<std::string::size_type> index_vec;
  while ((pos = s.find_first_not_of(numbers, pos)) != std::string::npos) {
    index_vec.push_back(pos);
    ++pos;
  }
  for (auto x : index_vec) {
    std::cout << x << std::endl;
  }
}

int main() {
  find_number1("ab2c3d7R4E6");
  find_number2("ab2c3d7R4E6");
  find_digits1("ab2c3d7R4E6");
}