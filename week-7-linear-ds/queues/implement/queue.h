#ifndef queue_h
#define queue_h
#include <iostream>
using namespace std;

// class Node
template <class T>
class Node{

// public members are data and a pointer to the next node
public: 
  T data;
  Node<T>* next;

// constructor for the Node class
Node (){
  next = nullptr;
  }
};

// class queue
template <typename T, int max_size>
class queue{
public:

    // pointers to head, tail of the queue
    Node<T>  *head, *tail;

    // int num_ele keeping track of how many elements the queue has
    int num_ele;
    int max_num_ele;

    // function declarations
    // definitions are at the queue.cpp file
    queue();
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