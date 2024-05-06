#include <fstream>
int main(int argc, char **argv) {
  std::ofstream ofs(argv[1], std::ios::out);
  ofs << 1 << 2 << 3 << std::endl;
  ofs.close();
  return 0;
}