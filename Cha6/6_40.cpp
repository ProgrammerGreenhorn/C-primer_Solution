int ff(int a, int b = 0, int c = 0) { return 0; }

// wrong
// char *init(int ht = 24, int wd, char backend);

int main() {
  int i = 0;
  ff(i);
  return 0;
}