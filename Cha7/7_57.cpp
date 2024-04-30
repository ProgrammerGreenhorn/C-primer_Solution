#include <string>
class Account {
public:
  Account() = default;
  Account(std::string o, double a) : owner(o), amount(a){};
  static double rate();
  static void rate(double);
  void calculate();

private:
  std::string owner;
  double amount;
  static double interestRate;
  // must use const expression to init;
  constexpr static double test = 30;
};
// in the class shengming,and out of the class define(must)
constexpr double Account::test;

double Account::interestRate = 0.02;

void Account::rate(double newrate) { Account::interestRate = newrate; }

double Account::rate() { return Account::interestRate; }

void Account::calculate() {
  this->amount += (this->amount * Account::interestRate);
}

int main() { return 0; }