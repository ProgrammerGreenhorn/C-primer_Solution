

int cal(int, int) { return 1; };
// wrong can not override
// int cal(const int, const int) { return 2; };

int get();
// wrong
// double get();

// right
int *reset(int *);
double *reset(double *);
int main() {
  int a = 1, b = 2;
  cal(a, b);
}