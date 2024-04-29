#include <iostream>
#include <ostream>
#include <string>
class Screen {
public:
  using pos = std::string::size_type;
  Screen() = default;
  Screen(pos h, pos w) : height(h), width(w), contents(h * w, ' '){};
  Screen(pos h, pos w, char c) : height(h), width(w), contents{c} {};

  // get the content of the cursor
  char get() const;

  // move the cursor
  Screen &move(pos, pos);

  // set the content of cursor or the specificated place
  Screen &set(char);
  Screen &set(pos, pos, char);

  // display the contents
  Screen &display(std::ostream &);
  // const member function return const&
  const Screen &display(std::ostream &) const;

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  void do_display(std::ostream &) const;
};

char Screen::get() const { return this->contents[this->cursor]; }

Screen &Screen::move(pos h, pos w) {
  this->height = h;
  this->width = w;
  return *this;
}

Screen &Screen ::set(char ch) {
  this->contents[this->cursor] = ch;
  return *this;
}

Screen &Screen ::set(pos r, pos col, char ch) {
  this->contents[r * this->width + col] = ch;
  return *this;
}

Screen &Screen::display(std::ostream &os) {
  do_display(os);
  return *this;
}
const Screen &Screen::display(std::ostream &os) const {
  do_display(os);
  return *this;
}

void Screen::do_display(std::ostream &os) const { os << this->contents; }

int main() {
  Screen myScreen(5, 5, 'x');
  myScreen.move(4, 0).set('#').display(std::cout);
  std::cout << "/t" << std::endl;

  myScreen.display(std::cout);
  std::cout << std::endl;
}