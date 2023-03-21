// header guards preventing the header file from being incluided mutliple times
// in the same source code
#ifndef SLL_H
#define SLL_H

// every object of SL_list class constructs a Node struct
// as a private data member
class SL_list {
private:
  // this Node has the following private members
  struct Node {

    // pointer to the next Node which is an element of the linked list
    Node *next;

    // and an int ele
    int ele;
  };

  // other private members of the SL_list are
  // pointer to the head Node
  Node *head;

  // and int length of the full list
  int length;

  // public members of the SL_list class are the following methods
public:
  SL_list();
  ~SL_list();
  bool isEmpty();
  void push_front(int ele);
  void push_back(int ele);
  void pop_front();
  void print();
  int get_length();

  // my added functions
  void addFront(int ele);
  void addMiddle(int ele, int index);
};

#endif