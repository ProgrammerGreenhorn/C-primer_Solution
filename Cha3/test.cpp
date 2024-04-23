#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::string;
using std::vector;

int main() {
  vector<int> vec1;
  vec1.push_back(10);
  vector<int> vec2(vec1);
  vector<int> vec3 = vec1;

  // 10 ge 1
  vector<int> vec4(10, 1);
  // 10 he 1
  vector<int> vec6{10, 1};

  vector<string> vec5(10, "hi!");

  // tong ji fen su duan ren shu
  vector<int> scores(11, 0);
  unsigned score;
  while (cin >> score) {
    if (score <= 100) {
      ++scores[score / 10];
    }
  }

  // iterator and const_iterator
  auto b = scores.begin();
  auto c = scores.end();
  auto e = scores.cbegin();

  const vector<int> consv;
  auto d = consv.cbegin();

  string s = "hello wor";
  // die dai qi jie ying yong
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *it = toupper(*it);
  }
}
