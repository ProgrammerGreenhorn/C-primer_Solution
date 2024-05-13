#include <map>
#include <string>
int main() {
  std::map<std::string, int> m;
  std::map<std::string, int>::iterator it = m.find("hello");
}