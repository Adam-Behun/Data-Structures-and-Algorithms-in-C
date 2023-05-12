#ifndef doubletree_hpp
#define doubletree_hpp

class doubletree{
private:
  struct Node{
    double ele;
    Node *left;
    Node *right;
};

Node *root;
int flag;

void insert(Node *child, Node* parent, Node *newNode, int flag);
void PostOrder(Node *temp);

public:
  doubletree();
  ~doubletree();

  void create(double ele);
  bool is_empty();
  void destroy(Node *temp);
  void print();
};

#endif /* doubletree_hpp */