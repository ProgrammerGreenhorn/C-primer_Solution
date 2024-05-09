int main() {
  int i = 3;
  auto func = [&i]() -> bool {
    return i == 0 ? true : !(--i);
  };
}