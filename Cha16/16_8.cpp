#include <initializer_list>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
template <typename T> class Blob {
public:
  using value_type = T;
  using size_type = typename std::vector<T>::size_type;

  Blob() : data(std::make_shared<std::vector<T>>()){};

  Blob(std::initializer_list<T> il)
      : data(std::make_shared<std::vector<T>>(il.begin(), il.end())){};

  // a template conctructor,need to iter(beg,las)
  template <typename iter>
  Blob(const iter &beg, const iter &last)
      : data(std::make_shared<std::vector<T>>(beg, last)){};

  // point to the same vector
  Blob(const Blob &b) : data(b.data){};

  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  void push_back(const T &);

  void pop_back();

  T &front();
  const T &front() const;

  T &back();
  const T &back() const;

  T &operator[](size_type);
  const T &operator[](size_type) const;

private:
  std::shared_ptr<std::vector<T>> data;
  void check(size_type, const std::string &) const;
};
// definition out of class should write template infomation
template <typename T>
void Blob<T>::check(size_type i, const std::string &mes) const {
  if (i >= size()) {
    throw std::out_of_range(mes);
  }
}

// back
template <typename T> T &Blob<T>::back() {
  check(0, "wrong, back on empty blob!");
  return data->back();
}
// back const
template <typename T> const T &Blob<T>::back() const {
  check(0, "wrong, back on empty blob!");
  return data->back();
}
// front
template <typename T> T &Blob<T>::front() {
  check(0, "wrong, front on empty blob!");
  return data->front();
}
// front const
template <typename T> const T &Blob<T>::front() const {
  check(0, "wrong, front on empty blob!");
  return data->front();
}

// push_back
template <typename T> void Blob<T>::push_back(const T &t) {
  data->push_back(t);
}

// pop_back
template <typename T> void Blob<T>::pop_back() {
  check(0, "wrong,pop_back on empty blob");
}

// override of []
template <typename T> T &Blob<T>::operator[](size_type index) {
  check(index, "subscript out of range!");
  return data->at(index);
}

// override of [] const
template <typename T> const T &Blob<T>::operator[](size_type index) const {
  check(index, "subscript out of range!");
  return data->at(index);
}

int main() {
  // b1 and b2 's data point ro a same vector
  Blob<int> b1{1, 2, 3, 4};
  Blob<int> b2(b1);
  std::cout << b2.size() << std::endl;
  b1.pop_back();
  std::cout << b2.size() << std::endl;

  Blob<std::string> sb{"hello", "world"};
  std::cout << sb.size() << std::endl;

  Blob<int> cb{1, 2, 3};
  cb[0] = 4;
  std::cout << cb[0] << std::endl;

  // wrong
  // const Blob<int> conb{1, 2, 3};
  // conb[0] = 4;

  std::vector<double> db{2.0, 3.1};
  Blob<double> blob_db(db.cbegin(),db.cend());
  std::cout << db.back() << std::endl;

  return 0;
}