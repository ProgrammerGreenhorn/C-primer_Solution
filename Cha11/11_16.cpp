#include <map>
#include <string>
int main() {
  std::map<std::string, int> m;
  auto it = m.begin();
  it->second = 1;
  return 0;
}