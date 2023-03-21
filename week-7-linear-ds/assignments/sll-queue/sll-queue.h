#ifndef sll_queue
#define sll_queue

// some eles should be private?
// enqueue eles of different type to the same queue?
// add comments
template <class T1>
  class Node {

  public:
    T1 ele;
    Node<T1> *next = nullptr;
  };

// objects of class SL_list can be of any data type class T
template <class T> 
class SL_list {

// public data member is Node containing *next, and T ele
public:
  

  Node<T> *head;
  Node<T> *tail;
  int length;

// public elements of SL_list are these funnctions
// implementations are in the sll-queue.cpp file

  SL_list();
  ~SL_list();
  bool IsEmpty();
  void display();
  void addFront(T ele);
  void addBack(T ele);
  void addMiddle(T ele, int index);
  void removeNode(int index);
};

template <typename T, int max_size>
class Queue{
public:
  SL_list<T> list;
  int max_num_ele;

  Queue();
  // ability to enqueue different data types to the same queue
  template <typename T1>
  void enqueue(T1 ele);
  void dequeue();
  T front();
  T back();
  bool IsFull();
  bool IsEmpty();
  void print();
};

#endif /* queue.h */