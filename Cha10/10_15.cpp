void func(const int &a) {
  auto lfunc = [a](const int &b) { return a + b; };
}

int main() { return 0; }