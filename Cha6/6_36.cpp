#include <string>
#include <vector>

// 1
//  the size must be the most behind
std::string (&func1())[10];

using arrpoint = std::string[10];

// 2
arrpoint &func2();

// 3
auto func3() -> std::string (&)[10];

// 4
std::vector<std::string> sv{"sdsds"};
decltype(sv) &func4();

int main() { return 0; }