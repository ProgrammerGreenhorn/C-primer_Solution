#include <cstdlib>
#include <iostream>
#include <string>
int main(int argc, char **argv) {
  int score = atoi(argv[1]);
  // too ex
  std::string finalscore = (score > 90)   ? "high pass"
                           : (score < 60) ? "fail"
                           : (score < 75) ? "low pass"
                                          : "pass";
  std::cout << finalscore << std::endl;

  if (score > 90) {
    std::cout << "high pass" << std::endl;
  } else if (score > 75) {
    std::cout << "pass" << std::endl;
  } else if (score > 60) {
    std::cout << "low pass" << std::endl;
  } else {
    std::cout << "fail" << std::endl;
  }
  return 0;
}
