#include <string>
class TreeNode {
public:
  TreeNode(const std::string &s = "")
      : value(s), count(0), left(nullptr), right(nullptr){};
  TreeNode(const TreeNode &t) : value(t.value), count(t.count) {
    this->left = nullptr;
    this->right = nullptr;
  };
  TreeNode &operator=(const TreeNode &t) {
    value = t.value;
    count = t.count;
    left = nullptr;
    right = nullptr;
    return *this;
  };

private:
  std::string value;
  int count;
  TreeNode *left;
  TreeNode *right;
};

class BinTree {
public:
  BinTree() : root(nullptr){};
  BinTree(TreeNode *t) : root(t){};

  BinTree(const TreeNode &t) { root = new TreeNode(t); }

private:
  TreeNode *root;
};

int main() { return 0; }