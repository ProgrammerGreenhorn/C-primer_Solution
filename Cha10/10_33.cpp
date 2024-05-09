
#include <fstream>
#include <iterator>
int main(int argc, char **argv) {
  std::ifstream ifs(argv[1], std::ifstream::in);
  std::istream_iterator<int> cin_it(ifs), eof;

  std::ofstream ofs1(argv[2], std::ofstream::out);
  std::ostream_iterator<int> out_it1(ofs1, " ");

  std::ofstream ofs2(argv[3], std::ofstream::out);
  std::ostream_iterator<int> out_it2(ofs2, "\n");

  while (cin_it != eof) {
    if (*cin_it % 2 == 0) {
      // euqal to ofs1 >> *cin_it;
      *out_it1++ = *cin_it;
    } else {
      *out_it2++ = *cin_it;
    }
    ++cin_it;
  }
  ifs.close();
  ofs1.close();
  ofs2.close();
  return 0;
}