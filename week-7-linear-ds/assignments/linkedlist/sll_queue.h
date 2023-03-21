#ifndef sll_queue
#define sll_queue

// objects of class SL_list can be of any data type
template <class T> 
class SL_list {

// private data member is Node containing *next, and T ele
public:
  template <class T1>
  class Node {

  public:
    T1 ele;
    Node<T1> *next;
  };

// other private elements of SL_list are *head, and length
  Node<T> *head;
  Node<T> *tail;
  int length;

// public elements of SL_list are these funnctions
// implementations are in the sll.cpp file

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