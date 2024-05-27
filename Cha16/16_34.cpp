template <typename T> int compare(const T &, const T &) { return 1; }

template <typename T, typename T1> int compare2(const T &, const T1 &) {
  return 1;
}

int main() {
  // wrong ,length not equal
  // compare("hi", "wod");

  compare("hi", "ed");

  compare2("HI", "ED");
  compare2("HI", "ENMD");
}