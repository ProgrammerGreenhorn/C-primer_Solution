#include <fstream>
int main(int argc, char **argv) {
  std::ofstream ofs(argv[1], std::ofstream::out | std::ofstream::app);
  ofs << 1 << 2 << 3 << std::endl;
  ofs.close();
  ofs.open(argv[2], std::ofstream::out | std::ofstream::trunc);
  ofs << 1 << 2 << 3 << 4 << std::endl;
  ofs.close();
  return 0;
}