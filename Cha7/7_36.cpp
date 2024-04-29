struct X {
public:
  X(int i, int j) : base(i), rem(i % j){};

private:
  int rem, base;
};

int main() { return 0; }