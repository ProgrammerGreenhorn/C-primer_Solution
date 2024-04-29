class Window_mgr {
public:
  void clear();
};
class Screen {
  friend void Window_mgr::clear();
};

int main() { return 0; }
