#include <cstddef>
#include <iostream>
#include <string>

class Quote {
public:
  Quote() = default;
  Quote(const std::string &s, double p) : bookNO(s), price(p){};
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

class bulkQuote : public Quote {
public:
  bulkQuote() = default;
  bulkQuote(const std::string &s, double p, std::size_t qty, double dis)
      : Quote(s, p), min_qty(qty), discount(dis){};
  double net_price(std::size_t cnt) const override {
    // reach the min_qty, can give a discount;
    if (cnt >= min_qty) {
      return cnt * (1 - discount) * price;
    } else {
      return cnt * price;
    }
  };

private:
  // the least qty that can give a discount
  std::size_t min_qty = 0;
  double discount = 0;
};

class limitQuote : public Quote {
public:
  limitQuote() = default;
  limitQuote(const std::string &s, double p, std::size_t qty, double dis)
      : Quote(s, p), max_qty(qty), discount(dis){};
  double net_price(std::size_t cnt) const override {
    if (cnt <= max_qty) {
      return cnt * (1 - discount) * price;
    } else {
      // over max_qty should be yuanjia
      return (max_qty * (1 - discount) * price) + ((cnt - max_qty) * price);
    }
  };

private:
  std::size_t max_qty = 0;
  double discount = 0;
};

double print_total(std::ostream &os, const Quote &q, std::size_t n) {
  double ret = q.net_price(n);
  os << "ISBN: " << q.isbn() << " # sold: " << n << " total due: " << ret
     << std::endl;
  return ret;
}

int main() {
  Quote item1("1-1", 20);
  bulkQuote item2("1-2", 20, 10, 0.1);
  limitQuote item3("1-3", 20, 5, 0.1);

  print_total(std::cout, item1, 10);
  print_total(std::cout, item2, 10);
  print_total(std::cout, item3, 10);
  item1.debug();
  item2.debug();
  item3.debug();
}