#include "CList.h"
#include <iostream>
using namespace std;

// constructor
template <typename T> CList<T>::CList() {
  head->next = head;
  length = 0;
}

template <typename T> CList<T>::~CList() {
  cout << "Destructor is called" << endl;

  // hop through the linked list
  Node *temp = head;
  Node *next;
  for (int i = 0; i < length; i++) {

    // release the heap memory
    next = temp->next;
    delete temp;
    temp = next;
  }
}

template <typename T> bool CList<T>::IsEmpty() {
  if (length == 0) {
    return true;
  } else {
    return false;
  }
}

template <typename T> void CList<T>::push_front(T ele) {

  // create a Node and set its ele member
  Node *newNode = new Node;
  newNode->ele = ele;

  if (IsEmpty()) {

    // as it's the first ele, it's the head
    head = newNode;
    head->next = head;

  } else {

    // hop the list until the temp->next points to the head again
    Node *temp = head;
    while (temp->next != head) {
      temp = temp->next;
    }
    temp->next = newNode;

    // insert it in front of the head
    newNode->next = head;
    head = newNode;
    //temp->next = head;
  }

  // length increases
  length++;
}

template <typename T> void CList<T>::push_back(T ele) {

  // create the Node and set its ele member
  Node *newNode = new Node;
  newNode->ele = ele;

  // keep it circular
  newNode->next = head;
  
  if (IsEmpty()) {
    // as it's the first ele, it's the head
    head = newNode;
  
  } else {
    
    // hop until end of list
    Node *temp = head;
    while (temp->next != head) {
      temp = temp->next;
    }

    // insert the node
    temp->next = newNode;
  }
  length++;
}

template <typename T> void CList<T>::insert(int index, T ele) {
  
  if (index < 0) {
    cout << "Wrong index." << endl;
    return;

  // use the functions that are defined already
  } else if (IsEmpty() || index == 0) {
    push_front(ele);
    return;
    
  // use the functions that are defined already  
  } else if (index >= length) {
    push_back(ele);
    return;
    
  } else {

    // create a new Node and set its ele
    Node *newNode = new Node;
    newNode->ele = ele;

    // find the right index
    Node *temp = head;
    for (int i = 0; i < index - 1; i++) {
      temp = temp->next;
    }

    // insert the newNode
    newNode->next = temp->next;
    temp->next = newNode;
    length++;
    }
}


template <typename T> void CList<T>::remove(int index) {
  if (IsEmpty()) {
    cout << "No elements" << endl;

  } else if (index < 0) {
    cout << "Index out of bound" << endl;
  
  } else if (index == 0) {

    // deleting the head node
    Node *temp = head->next;
    delete head;
    head = temp;

    // for indexes > 0
  } else {
    
    Node *temp = head;
    for (int i = 0; i < index - 1; i++) {
      temp = temp->next;
    }

    // go one behind the current losing the one in the middle
    Node *temp2 = temp->next->next;
    delete temp->next;
    temp->next = temp2;
  }

  // decrease length after deletion
  length--;
}

template <typename T> int CList<T>::get_length() { return length; }


template <typename T> void CList<T>::display() {

  // if empty, nothing to print
  if (IsEmpty()) {
    cout << "List is empty" << endl;
  } else {

    // point to the head
    Node *temp = head;

    // print until reach tail
    for (int i = 0; i < length; i++) {
      cout << temp->ele << " ";
      temp = temp->next;
    }
    cout << endl;
  }
}