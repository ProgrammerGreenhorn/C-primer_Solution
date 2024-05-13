#include <set>
#include <string>
class Sales_data {
public:
  std::string isbn() const { return this->isb; }
  std::string isb;
};

bool compare_isbn(const Sales_data &lhs, const Sales_data &rhs) {
  return lhs.isbn() < rhs.isbn();
}
using func_ptr = bool (*)(const Sales_data &, const Sales_data &);

int main() {
  std::multiset<Sales_data, func_ptr> bookstore(func_ptr);
  return 0;
}