#include <set>
#include <string>
using std::set;
using std::string;
class Message;
class Folder;
class Folder {
public:
  explicit Folder(const string &s = "") : name(s){};
  Folder(const Folder &);
  Folder &operator=(const Folder &);
  ~Folder();
  void add_msg(Message &);
  void remove_msg(Message &);

private:
  string name;
  set<Message *> messages;
};
class Message {
public:
  friend class Folder;
  explicit Message(const string &s = "") : content(s){};
  Message(const Message &);
  Message &operator=(const Message &);
  ~Message();

  void save(Folder &);
  void remove(Folder &);
  void swap(Message &, Message &);

  void add_fold(Folder &);
  void remove_fold(Folder &);
  string get_message() { return this->content; }

private:
  string content;
  set<Folder *> folders;
  void add_to_folders(const Message &m) {
    for (auto f : m.folders) {
      f->add_msg(*this);
    }
  }

  void remove_from_folders() {
    for (auto f : this->folders) {
      f->remove_msg(*this);
    }
  }
};
Folder::Folder(const Folder &f) {
  this->name = f.name + ".copy";
  this->messages = f.messages;
  for (auto m : f.messages) {
    m->add_fold(*this);
  }
}

Folder &Folder::operator=(const Folder &f) {
  for (auto m : this->messages) {
    m->remove_fold(*this);
  }
  this->messages = f.messages;
  for (auto m : f.messages) {
    m->add_fold(*this);
  }
  return *this;
}

Folder::~Folder() {
  for (auto m : this->messages) {
    m->remove_fold(*this);
  }
}

void Folder::add_msg(Message &s) { (this->messages).insert(&s); }
void Folder::remove_msg(Message &s) { this->messages.erase(&s); }

Message::Message(const Message &mes) {
  this->content = mes.content;
  this->folders = mes.folders;
  // add the new created message to the mes.folders;
  add_to_folders(mes);
}

void Message::save(Folder &f) {
  (this->folders).insert(&f);
  f.add_msg(*this);
}
void Message::remove(Folder &f) {
  (this->folders).erase(&f);
  f.remove_msg(*this);
}

void Message::swap(Message &lhs, Message &rhs) {
  using std::swap;
  // first delete rhs and lhs from their holders
  for (auto f : lhs.folders) {
    f->remove_msg(lhs);
  }

  for (auto f : rhs.folders) {
    f->remove_msg(rhs);
  }
  swap(lhs.folders, rhs.folders);
  swap(lhs.content, rhs.content);

  for (auto f : lhs.folders) {
    f->add_msg(lhs);
  }
  for (auto f : rhs.folders) {
    f->add_msg(rhs);
  }
}

Message &Message::operator=(const Message &mes) {
  // remove the left message from its folders
  remove_from_folders();
  this->content = mes.content;
  this->folders = mes.folders;
  // add the left message to the right message's folders;
  add_to_folders(mes);
  return *this;
}

void Message::add_fold(Folder &f) { (this->folders).insert(&f); }

void Message::remove_fold(Folder &f) { (this->folders).erase(&f); }

// the mumber string and set has its own descruction,we do not need to write;
Message::~Message() { remove_from_folders(); }

int main() {
  Message m("hello");
  Folder f1("f1"), f2("f2");
  m.save(f1);
  Folder f3 = f1;
  return 0;
}
