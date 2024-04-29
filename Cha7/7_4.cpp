#include <iostream>
#include <istream>
#include <ostream>
#include <string>
class Person {
  // use friend to let the not member function to access the private member
  friend std::istream &read(std::istream &is, Person &person);
  friend std::ostream &print(std::ostream &os, const Person &person);

private:
  std::string name = "";
  std::string house = "";

public:
  // type member, must define first then use
  using str = std::string;
  // constructor function
  Person() = default;
  Person(const std::string &n, const std::string &h) : name(n), house(h){};
  Person(const std::string &n) : name(n){};
  // constructor function

  str getName() const;
  str getHouse() const;
};

// member function
std::string Person::getName() const { return this->name; };
// member function
std::string Person::getHouse() const { return this->house; };

// not member function
std::istream &read(std::istream &is, Person &person) {
  is >> person.name >> person.house;
  return is;
}

// not member function
std::ostream &print(std::ostream &os, const Person &person) {
  os << person.getName() << person.getHouse();
  return os;
}
int main() {
  Person p1, p2;
  if (read(read(std::cin, p1), p2)) {
    std::cout << p1.getName() << " " << p1.getHouse() << std::endl
              << p2.getName() << " " << p2.getHouse() << std::endl;
  }
  return 0;
}
