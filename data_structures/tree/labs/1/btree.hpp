#ifndef btree_hpp
#define btree_hpp

class btree{
private:

  // class btree consists of a struct Node 
  struct Node{ // every Node has the following public members
    int ele;
    Node *left;
    Node *right;
};

// private members of btree class
Node *root;
int flag;

// private methods to be used on the btree objects
void insert(Node *child, Node* parent, Node *newNode, int flag);
void PreOrder(Node *temp);
void InOrder(Node *temp);
void PostOrder(Node *temp);

// public methods on btree objects
public:
  btree();
  ~btree();

  void create(int ele);
  bool is_empty();
  void destroy(Node *temp);
  void print();
};

#endif /* btree_hpp */