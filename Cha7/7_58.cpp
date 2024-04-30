#include <vector>
class Example {
public:
  // rate shoule be a constant expression
  static constexpr double rate = 6.5;
  static const int vecsize = 20;
  // only shengming,do not define
  static std::vector<double> vec;
};

constexpr double Example::rate;
const int Example::vecsize;

// define here
std::vector<double> Example::vec(Example::vecsize);