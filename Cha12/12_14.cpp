#include <memory>
#include <string>
struct connection {
  std::string ip;
  int port;
  connection(std::string i, int p) : ip(i), port(p){};
};

struct destination {
  std::string ip;
  int port;
  destination(std::string i, int p) : ip(i), port(p){};
};

connection connect(destination *pDest) {
  std::shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
  return *pConn;
}

int main() { return 0; }