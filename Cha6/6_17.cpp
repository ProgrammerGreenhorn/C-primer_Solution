#include <cctype>
#include <string>
bool hasUpper(const std::string &s) {
  bool flag = false;
  for (auto x : s) {
    if (x >= 'A' && x <= 'Z') {
      flag = true;
    }
  }
  return flag;
}

void toLower(std::string &s) {
  for (auto &c : s) {
    c = tolower(c);
  }
}

int main() { return 0; }