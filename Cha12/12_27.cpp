#include <fstream>
#include <map>
#include <memory>
#include <ostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using std::map;
using std::set;
using std::shared_ptr;
using std::string;
using std::vector;
class queryResult {
public:
  friend std::ostream &print(std::ostream &, const queryResult &);
  using line_no = vector<int>::size_type;
  queryResult(string s, shared_ptr<set<line_no>> p,
              shared_ptr<vector<string>> v)
      : sought(s), lines(p), file_vec(v){};

private:
  string sought;
  shared_ptr<set<line_no>> lines;
  shared_ptr<vector<string>> file_vec;
};
class textQuery {
public:
  using line_no = vector<string>::size_type;
  textQuery(std::ifstream &);
  queryResult query(const string &s) const;

private:
  shared_ptr<vector<string>> file_vec;
  map<string, shared_ptr<set<line_no>>> word_column;
};

textQuery::textQuery(std::ifstream &ifs) {
  string text;
  int column = 0;
  while (std::getline(ifs, text)) {
    (this->file_vec)->push_back(text);
    std::istringstream istr(text);
    string word;
    while (istr >> word) {
      auto &lines = word_column[word];
      if (!lines) {
        // reset will let the share_ptr point a new object;
        lines.reset(new set<line_no>);
      }
      lines->insert(column);
    }
  }
}

queryResult textQuery::query(const string &s) const {
  auto loc = (this->word_column).find(s);
  static shared_ptr<set<line_no>> nodata(new set<line_no>);
  if (loc == word_column.end()) {
    return queryResult(s, nodata, this->file_vec);
  }
  return queryResult(s, loc->second, this->file_vec);
}

int main() { return 0; }
