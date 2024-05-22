#include <cstddef>
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

class Quote {
public:
  friend Quote operator+(const Quote &, const Quote &);
  Quote() = default;
  Quote(const std::string &s, double p) : bookNO(s), price(p){};
  // copy
  Quote(const Quote &q) {
    bookNO = q.bookNO;
    price = q.price;
  }
  // move
  Quote(Quote &&q) {
    bookNO = std::move(q.bookNO);
    price = std::move(q.price);
  }
  Quote &operator=(const Quote &rhs) {
    this->bookNO = rhs.bookNO;
    this->price = rhs.price;
    return *this;
  }
  Quote &operator+=(const Quote &rhs) {
    if (bookNO == rhs.bookNO) {
      this->price += rhs.price;
    }
    return *this;
  }
  std::string isbn() const { return this->bookNO; };
  virtual double net_price(std::size_t n) const { return n * this->price; };
  virtual void debug() {
    std::cout << "bookNO: " << bookNO << " price : " << price << std::endl;
  }
  virtual ~Quote() = default;

private:
  std::string bookNO;

protected:
  double price = 0.0;
};
Quote operator+(const Quote &lhs, const Quote &rhs) {
  Quote sum = lhs;
  if (lhs.bookNO == rhs.bookNO) {
    sum += rhs;
  }
  return sum;
}

class discQuote : public Quote {
public:
  discQuote() = default;
  discQuote(const std::string &s, double p, std::size_t q, double dis)
      : Quote(s, p), qty(q), discount(dis){};

  discQuote(const discQuote &dq)
      : Quote(dq), qty(dq.qty), discount(dq.discount){};

  discQuote(discQuote &&dq)
      : Quote(dq), qty(std::move(dq.qty)), discount(std::move(dq.discount)){};

  discQuote &operator=(const discQuote &rhs) {
    Quote::operator=(rhs);
    qty = rhs.qty;
    discount = rhs.discount;
    return *this;
  };
  discQuote &operator+=(const discQuote &rhs) {
    Quote::operator+=(rhs);
    if (this->isbn() == rhs.isbn()) {
      this->qty += rhs.qty;
    }
    return *this;
  };
  // pure virtual
  double net_price(std::size_t n) const = 0;

  std::pair<std::size_t, double> discount_policy() const {
    return {qty, discount};
  }

protected:
  std::size_t qty = 0;
  double discount = 0.0;
};

class bulkQuote : public discQuote {
public:
  bulkQuote() = default;
  bulkQuote(const std::string &s, double p, std::size_t qty, double dis)
      : discQuote(s, p, qty, dis){};
  double net_price(std::size_t cnt) const override {
    // reach the min_qty, can give a discount;
    if (cnt >= qty) {
      return cnt * (1 - discount) * price;
    } else {
      return cnt * price;
    }
  };
};

class limitQuote : public discQuote {
public:
  limitQuote() = default;
  limitQuote(const std::string &s, double p, std::size_t qty, double dis)
      : discQuote(s, p, qty, dis){};
  double net_price(std::size_t cnt) const override {
    if (cnt <= qty) {
      return cnt * (1 - discount) * price;
    } else {
      // over max_qty should be yuanjia
      return (qty * (1 - discount) * price) + ((cnt - qty) * price);
    }
  };
};

double print_total(std::ostream &os, const Quote &q, std::size_t n) {
  double ret = q.net_price(n);
  os << "ISBN: " << q.isbn() << " # sold: " << n << " total due: " << ret
     << std::endl;
  return ret;
}

int main() {
  std::vector<std::shared_ptr<Quote>> vec;
  std::shared_ptr<Quote> item1 = std::make_shared<Quote>("1-1", 20);
  std::shared_ptr<bulkQuote> item2 =
      std::make_shared<bulkQuote>("1-2", 10, 20, 0.1);
  std::shared_ptr<limitQuote> item3 =
      std::make_shared<limitQuote>("1-3", 20, 5, 0.1);
  vec.push_back(item1);
  vec.push_back(item2);
  vec.push_back(item3);
  double sum = 0;
  for (auto x : vec) {
    print_total(std::cout, *x, 10);
    sum += x->net_price(10);
  }
  std::cout << "total : " << sum << std::endl;
}