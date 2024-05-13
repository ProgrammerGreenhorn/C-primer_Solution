#include <cstddef>
#include <map>
#include <string>
int main() {
  std::map<std::string, size_t> word_count;
  std::map<std::string, size_t>::const_iterator map_it = word_count.cbegin();
  auto map_it2 = word_count.cbegin();
}