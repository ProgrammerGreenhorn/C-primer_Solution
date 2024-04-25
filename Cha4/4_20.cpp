#include <iostream>
#include <iterator>
#include <string>
#include <vector>
int main() {
  std::vector<std::string> sv{"22", "sdsa", "sdadas", "gdsg", "sgdds", "dghh"};
  std::vector<std::string>::iterator iter = std::begin(sv);

  std::cout << *iter++ << " ";

  // wrong
  // std::cout << (*iter)++ << " ";

  // wrong
  //*iter.empty();

  std::cout << iter->empty() << " ";

  // wrong
  //++*iter;

  std::cout << iter++->empty() << std::endl;
}