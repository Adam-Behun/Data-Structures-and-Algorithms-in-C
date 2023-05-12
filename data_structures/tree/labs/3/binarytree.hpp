#ifndef binarytree_hpp
#define binarytree_hpp

class binarytree{
private:
  struct Node{
    int ele;
    Node *left;
    Node *right;
    Node *middle;  // adding middle pointer as the root has 3 nodes
};

Node *root;
int flag;

void insert(Node *child, Node* parent, Node *newNode, int flag);
void PostOrder(Node *temp);

public:
  binarytree();
  ~binarytree();

  void create(int ele);
  bool is_empty();
  void destroy(Node *temp);
  void print();
};

#endif /* binarytree_hpp */