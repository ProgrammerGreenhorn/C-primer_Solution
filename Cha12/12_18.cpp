#include <cstddef>
#include <initializer_list>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::weak_ptr;
class strBlobPtr;
class strBlob {
public:
  friend class strBlobPtr;
  using size_type = vector<string>::size_type;
  // constructor
  strBlob();
  strBlob(std::initializer_list<string>);

  size_type size() const;
  bool empty() const;

  void push_back(const string &s);
  void pop_back();

  // need const override
  string &front();
  const string &front() const;
  std::string &back();
  const string &back() const;

private:
  std::shared_ptr<vector<string>> data;
  void check(size_type, const string &) const;
};

strBlob::strBlob() : data(std::make_shared<vector<string>>()) {}

// use (il.begin(),il.end()) to init the vector<string>;
// then make_shared to create a pointer to the above vector<string>
// then give the pointer to data;
strBlob::strBlob(std::initializer_list<string> il)
    : data(std::make_shared<vector<string>>(il.begin(), il.end())){};

strBlob::size_type strBlob::size() const { return (this->data)->size(); }

bool strBlob::empty() const { return (this->data)->empty(); }

void strBlob::push_back(const std::string &s) { (this->data)->push_back(s); }

void strBlob::pop_back() {
  check(0, "pop_back on empty strBlob");
  (this->data)->pop_back();
}

string &strBlob::back() {
  check(0, "back on empty strBlob");
  return (this->data)->back();
}
const string &strBlob::back() const {
  check(0, "back on empty strBlob");
  return (this->data)->back();
}

string &strBlob::front() {
  check(0, "front on empty strBlob");
  return (this->data)->front();
}

const string &strBlob::front() const {
  check(0, "front on empty strBlob");
  return (this->data)->front();
}

void strBlob::check(size_type i, const string &msg) const {
  if (i >= this->data->size()) {
    throw std::runtime_error(msg);
  }
}
class strBlobPtr {
public:
  strBlobPtr() : curr(0){};
  strBlobPtr(strBlob &a, std::size_t i = 0) : wptr(a.data), curr(i){};

  // jie ying yong
  string &deref() const;
  // di zeng
  strBlobPtr &inc();

private:
  weak_ptr<vector<string>> wptr;
  std::size_t curr;

  std::shared_ptr<vector<string>> check(std::size_t, const std::string &) const;
};

std::shared_ptr<vector<string>>
strBlobPtr::check(std::size_t t, const std::string &msg) const {
  // first we need to check if the vector is exist;
  auto ret = wptr.lock();
  if (!ret) {
    throw std::runtime_error("unbound strBlobPtr");
  }
  if (t > ret->size()) {
    throw std::runtime_error("msg");
  }
  return ret;
}

string &strBlobPtr::deref() const {
  auto p = check(curr, "deref past end");
  return (*p)[this->curr];
}

strBlobPtr &strBlobPtr::inc() {
  auto p = check(curr, "inc after end");
  ++(this->curr);
  return *this;
}

int main() {
  strBlob sb;
  sb.push_back("hello");
  cout << sb.back() << endl;

  const strBlob csb({"hello", "world", "nihao"});
  cout << csb.back() << endl;
  return 0;
}
