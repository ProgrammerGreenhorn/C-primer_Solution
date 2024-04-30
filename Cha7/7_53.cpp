class Debug {
public:
  constexpr Debug(bool h, bool s, bool i, bool o)
      : hardware(h), sofaware(s), io(i), other(o){};
  constexpr Debug(bool h) : Debug(h, false, false, false){};

  constexpr bool Any();

  void set_hardware(bool);
  void set_software(bool);
  void set_io(bool);
  void set_other(bool);

private:
  bool hardware;
  bool sofaware;
  bool io;
  bool other;
};

constexpr bool Debug::Any() {
  return this->hardware || this->sofaware || this->io || this->other;
}

void Debug::set_hardware(bool h) { this->hardware = h; }
void Debug::set_software(bool s) { this->sofaware = s; }
void Debug::set_io(bool i) { this->io = i; }
void Debug::set_other(bool o) { this->other = o; }

int main() { return 0; }