#ifndef DLIST_HPP
#define DLIST_HPP

class DList {
public:
  struct Node {
    int ele;
    Node *prev;
    Node *next;

    // Constructor for Node class
    Node(int ele): ele(ele), next(nullptr), prev(nullptr){}
  };

  // header and trailer for the DList class
  Node *header;
  Node *trailer;

  // functions to call on DList objects
  DList();
  ~DList();
  bool is_empty();
  void push_front(int ele);
  void push_back(int ele);
  Node *begin() const;
  void display() const;
};

#endif