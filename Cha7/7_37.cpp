class Date {
public:
  Date(int y, int m, int d) : year(y), month(m), day(d){};
  Date(int y) : year(y){};

private:
  int year, month, day;
};
