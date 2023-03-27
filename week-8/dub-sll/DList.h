#ifndef DList_h
#define DList_h

// was provided with the assignment
class DList{
private:
  struct Node{
    int ele;
    Node *prev;
    Node *next;
  };
    int length;
    Node *header;
    Node *trailer;
public:
  DList();
  ~DList();
  bool is_empty();
  void push_front(int ele);
  void push_back(int ele);
  void insert(int index, int ele);
  void pop_front();
  void pop_back();
  void remove(int index);
  void display();
  int get_length();

  // two additional functions
  void clear();
  int search(int ele);
};

#endif /* DList_h */