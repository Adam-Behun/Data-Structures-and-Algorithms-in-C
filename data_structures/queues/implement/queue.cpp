#include "queue.h"
#include <iostream>
using namespace std;

// create a queue with T datatype and max_size passed in
template<typename T, int max_size>
queue<T, max_size>::queue(){
  
  // num_ele of queue initialized to 0
  num_ele = 0;

  // the max size of the queue is passed in to this constructor
  max_num_ele = max_size;
  head = nullptr;
  tail = nullptr;
}

// enqueue T1 element to the back (to the tail of the queue)
template<typename T, int max_size>
template<typename T1>
void queue<T, max_size>::enqueue(T1 ele){
 
  if(IsEmpty()){

    // create a new Node 
    Node<T1>* newNode = new Node<T1>;

    // queue was empty = set head, tail to point to this new Node
    head = newNode;
    tail = newNode;

    // set its element which was passed in
    newNode->data = ele;
  } else if(!IsFull()) {

    // if not empty, create new Node
    Node<T1>* newNode = new Node<T1>;

    tail->next = newNode;

    // tail point to it
    tail = newNode;

    // set Node's data members
    newNode->data = ele;
  }
  else{
    return;
  }

  // we enqueued = num_ele increased
  num_ele++;
}

template<typename T, int max_size>
void queue<T, max_size>::dequeue(){

  // if empty, there is nothing to dequeue
  if(IsEmpty()){
    cout<<"Empty queue"<<endl;
    return;
  }else if(num_ele == 1){
    
    // temp point to second element in the queue
    Node<T> *temp = head->next;

    // delete first element from heap
    delete head;

    // second element is the new head
    head = temp;
    tail = head;

  } else {

    // temp point to second element in the queue
    Node<T> *temp = head->next;

    // delete first element from heap
    delete head;

    // second element is the new head
    head = temp;
  }

  // enqueue = decrease num_ele
  num_ele--;
}

template<typename T, int max_size>
bool queue<T, max_size>::IsEmpty(){

  // num_ele was set to 0 in constructor and keeps track of enqueue and dequeue operations
  // used here to check the num_ele
  if (num_ele == 0){
    return true;
  }else{
    return false;
  }
}

template<typename T, int max_size>
bool queue<T, max_size>::IsFull(){

  // check num_ele against max_num_ele which was passed when constructing the queue
  if (num_ele == max_num_ele){
    return true;
  }else{
    return false;
  }
}

template<typename T, int max_size>
void queue<T, max_size>::print(){
  if(IsEmpty()){
    cout<<"Empty queue"<<endl;
    return;
  }else{

    // temp point to head
    Node<T> *temp = head;
    cout<<"The full queue is "<<endl;

    // keep printing until pointing to NULL
    while(temp != NULL){
      cout<<temp->data;

      // move further
      temp = temp->next;
    }
  }
}

template<typename T, int max_size>
T queue<T, max_size>::front(){
  if(IsEmpty()){
    cout<<"Empty queue"<<endl;

    // return the default value of type T
    return T();
  }else{

    // print the data element of the head node
    return head->data;
  }
}

template<typename T, int max_size>
T queue<T, max_size>::back(){
  if(IsEmpty()){
    cout<<"Empty queue"<<endl;

    // return default value of type T
    return T();
  }else{

    // print the data element of the tail node
    return tail->data;
  }
}