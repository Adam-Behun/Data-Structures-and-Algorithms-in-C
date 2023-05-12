#include "sll-queue.h"
#include <iostream>
using namespace std;

// constructor for the SL_list objects
template <typename T> 
SL_list<T>::SL_list() {

  // creates a new Node
  head = new Node<T>;

  // head points to NULL
  head->next = NULL;

  // size of the list is initialized to 0
  length = 0;
}

// destructor for the SL_list class
template <typename T> 
SL_list<T>::~SL_list() {
  cout << "Destructor is called." << endl;

  // *temp points to the head of the list
  Node<T> *temp = head;

  // iterate until behind the list
  while (temp != NULL) {

    // *next points 1 Node further than temp
    Node<T> *next = temp->next;

    // delete temp
    delete temp;

    // jump 1 Node further
    temp = next;
  }
}

template <typename T> 
bool SL_list<T>::IsEmpty() {

  // length keeps track of the amount of elements in the list
  if (length == 0) {
    return true;
  } else {
    return false;
  }
}

template <typename T> 
void SL_list<T>::display() {
  if (IsEmpty()) {
    cout << "Empty list" << endl;
  } else {

    // temp points to head
    Node<T> *temp = new Node<T>;
    temp = head;

    // iterate until out of list
    while (temp != NULL) {

      // print the element
      cout << temp->ele << " " << endl;

      // hop one Node further
      temp = temp->next;
    }
    cout << endl;
  }
}

template <typename T>
void SL_list<T>::addFront(T ele) {

  // if there are no elements 
  if (IsEmpty()) {
    head->ele = ele;
    tail->ele = ele;
    head->next = NULL;

    // if there are elements in the list
  } else {

    // create new Node
    Node<T> *newNode = new Node<T>;

    // assign ele to this newNode's ele member
    newNode->ele = ele;

    // add newNode in front of head
    newNode->next = head;

    // newNode is the new head
    head = newNode;
  }
  length++;
}

// add element at a specific spot in the list
template <typename T> 
void SL_list<T>::addMiddle(T ele, int index) {

  if (IsEmpty()){
    head->ele = ele;
    tail->ele = ele;
  }
  
  // if index == 0, call addFront and pass the element to insert 
  else if (index == 0) {
    addFront(ele);

    // check for invalid index
  } else if (index < 0) {
    cout << "Cannot insert at a negative index" << endl;
    return;

    // for indexes >= 1
  } else {

    // point newNode to a new Node
    Node<T> *newNode = new Node<T>;

    // assign ele to the newNode
    newNode->ele = ele;

    // current points to head
    Node<T> *current = head;

    // iterate through the list
    for (int i = 0; i < index - 1; i++) {

      // hop further
      current = current->next;
    }

    // point to the same Node
    newNode->next = current->next;

    //  newNode has the newly inserted ele
    current->next = newNode;
  }
  length++;
}

template <typename T> 
void SL_list<T>::addBack(T ele) {
  
  // if empty, there is only 1 spot
  if (IsEmpty()) {
    head->ele = ele;
    tail->ele = ele;
  } else {

    // create new Node
    Node<T> *newNode = new Node<T>;

    // set its value
    newNode->ele = ele;

    // last Node points to NULL
    newNode->next = NULL;

    // temp is used for iteration
    Node<T> *temp = head;

    // hop until out of the list
    while (temp->next != NULL) {
      temp = temp->next;
    }

    // once at the end, insert newNode
    temp->next = newNode;
    
    // tail must point to the last element
    tail = newNode;
  }

  length++;
}

// remove Node at a specific index
template <typename T>
void SL_list<T>::removeNode(int index) {
  
  // check for exceptions
  if (IsEmpty()) {
    cout << "This list is empty." << endl;
    return;
  } else if (index < 0) {
    cout << "Cannot work with a negative index." << endl;
    return;

    // remove from the front of the list
  } else if (index == 0) {

    // point temp to the second ele
    Node<T> *temp = head->next;

    // delete the index 0 Node
    delete head;

    // temp is the new head
    head = temp;
    
  } else {

    // *currentNode points to head
    Node<T> *current = head;

    // prevNode points to NULL
    Node<T> *previous = NULL;

    // hop through the list using 2 pointers
    for (int i = 0; i < index; i++) {
      previous = current;
      current = current->next;

      // is current behind the list?
      if (current == NULL) {
        cout << "This index is behind the list." << endl;
        return;
      }
    }

    // point a Node further
    previous->next = current->next;

    // delete the current Node
    delete current;
  }
  length--;
}

// construct the queue
template <typename T, int max_size>
Queue<T, max_size>::Queue(){

  // Use the list that is already implemented
  //head = list.head;
  //tail = list.tail;
  //length = list.length;
  max_num_ele = max_size;
}

// push elements into the queue using the list's methods
template <typename T, int max_size>
template <typename T1>

// allow to input different types into the same list
void Queue<T, max_size>::enqueue(T1 input){

  if (IsFull()){
    cout<<"The queue is full"<<endl;
    return;
    
  } else if (list.IsEmpty()){

    // this is a queue so add to the back
    list.addBack(input);
    list.head->ele = input;
    list.tail->ele = input;
  } else {
    list.addBack(input);
  }
}

template <typename T, int max_size>
void Queue<T, max_size>::dequeue(){
  if (list.IsEmpty()){
    cout<<"The queue is empty."<<endl;
    return;
  } else {

    // deletes head
    list.removeNode(0);
  }
}

template <typename T, int max_size>
T Queue<T, max_size>::front(){
  if (IsEmpty()){
    cout<<"Empty queue"<<endl;
    return T();
  } else {
    return list.head->ele;
  }
}

template <typename T, int max_size>
T Queue<T, max_size>::back(){
  if (IsEmpty()){
    cout<<"Empty queue"<<endl;
    return T();
  } else {
    return list.tail->ele;
  }
}

template <typename T, int max_size>
bool Queue<T, max_size>::IsFull(){
  if (list.length == max_num_ele){
    return true;
  } else {
    return false;
  }
}

template <typename T, int max_size>
bool Queue<T, max_size>::IsEmpty(){
  return list.IsEmpty();
}

template <typename T, int max_size>
void Queue<T, max_size>::print(){
  return list.display();  
}