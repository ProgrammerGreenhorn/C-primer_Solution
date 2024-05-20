#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>
class X {
public:
  friend std::ostream &operator<<(std::ostream &, const X &);
  friend std::istream &operator>>(std::istream &, X &);
  friend X operator+(const X &, const X &);
  friend bool operator==(const X &, const X &);
  friend bool operator!=(const X &, const X &);
  X(int i = 0, std::string s = "", std::vector<int> v = {})
      : no(i), name(s), data(v){};

  // this is copy constructor
  X(const X &);

  // this is copy assgin,the parameter must be class X;
  X &operator=(const X &);

  // this is ovveride of = ,the parameter can be other type instead of class X;
  X &operator=(int);

  // override of += ,shuold be a member function because it will change the lhs;
  X &operator+=(const X &);

  int &operator[](std::vector<int>::size_type);
  const int &operator[](std::vector<int>::size_type) const;

private:
  int no;
  std::string name;
  std::vector<int> data;
};

// this is copy constructor
X::X(const X &x) {
  this->no = x.no;
  this->name = x.name;
  this->data.clear();
  this->data = x.data;
};
// this is copy assgin,the parameter must be class X;
X &X::operator=(const X &x) {
  this->no = x.no;
  this->name = x.name;
  this->data.clear();
  this->data = x.data;
  return *this;
};

// this is ovveride of = ,the parameter can be other type instead of class X;
X &X::operator=(int i) {
  this->no = i;
  return *this;
};

// override of += ,shuold be a member function because it will change the lhs;
X &X::operator+=(const X &rhs) {
  (this->no) += rhs.no;
  (this->name) += rhs.name;
  // copy the rhs to this's tail
  std::copy(rhs.data.cbegin(), rhs.data.cend(), std::back_inserter(this->data));
  return *this;
};
std::ostream &operator<<(std::ostream &os, const X &x) {
  os << x.no << " " << x.name << " : ";
  for (auto i : x.data) {
    os << i << "\t";
  }
  return os;
}
std::istream &operator>>(std::istream &is, X &x) {
  is >> x.no >> x.name;
  int i;
  while (is >> i) {
    x.data.push_back(i);
  }
  if (is.eof() || is.good()) {
  } else {
    x = X();
  }
  return is;
}

// override of + ,call the member function operator+=()
X operator+(const X &lhs, const X &rhs) {
  X sum = lhs;
  return sum += rhs;
};

//[]
int &X::operator[](std::vector<int>::size_type i) {
  // at can throw a exception
  return (this->data).at(i);
}

// const []
const int &X::operator[](std::vector<int>::size_type i) const {
  // at can throw a exception
  return (this->data).at(i);
}

bool operator==(const X &lhs, const X &rhs) {
  return (lhs.no == rhs.no && lhs.name == rhs.name && lhs.data == rhs.data);
}
bool operator!=(const X &lhs, const X &rhs) {
  return !(lhs.no == rhs.no && lhs.name == rhs.name && lhs.data == rhs.data);
}

int main() {
  X x{1, "hello", {1, 2, 3}};
  X x2;
  std::cin >> x2;
  std::cout << x2 << std::endl;

  X x3 = x + x2;
  std::cout << x3 << std::endl;

  x2 += x;
  std::cout << x2 << std::endl;

  std::cout << x2[1] << std::endl;
}
