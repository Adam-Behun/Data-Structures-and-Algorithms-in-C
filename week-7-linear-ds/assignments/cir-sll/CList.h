#ifndef CLIST_HPP
#define CLIST_HPP

template <typename T> class CList {
private:
  struct Node {
    T ele;
    Node *next;
  };
  Node *head; // For the initialization, the default node does not need to be a // head. You can define Node* tail; or Node* cursor;.
  int length;

public:
  CList();
  ~CList();
  bool IsEmpty();         // return true if the list is empty, otherwise false
  void push_front(T ele); // push a node (front)
  void push_back(T ele);  // push a node (back)
  void insert(int index, T ele); // Insert a node according to the index.
  void remove(int index);        // remove the element according to the index.
  int get_length();              // return the size of the list
  void display();                // print all the elements in the list
};

#endif