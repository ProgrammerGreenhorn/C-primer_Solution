struct inT {
  operator const int();
  operator int() const;
  explicit operator bool() const { return i; }

private:
  int i;
};

int main() { return 0; }