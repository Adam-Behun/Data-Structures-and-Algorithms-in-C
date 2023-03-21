// using "you-created" header file
#include "sll.h"
#include <iostream>
using namespace std;

// constructor
SL_list::SL_list() {

  // new head Node
  head = new Node;

  // head Node has pointer next
  head->next = NULL;

  // and an int ele
  head->ele = NULL;
  length = 0;
}

// destructor releasing the heap memory
SL_list::~SL_list() { cout << "Destructor is called." << endl; 

  //set temp node to point to the head
  Node *temp = head;

  // "traverse" over the array
  while (temp != NULL){

    // point to the next node
    Node* next = temp->next;

    // delete the current node
    delete temp;

    // temp is pointing to the above next
    temp = next;
  }
}

// check if the linked list is empty
bool SL_list::isEmpty() {
  if (length == 0) {
    return true;
  } else {
    return false;
  }
}

// pushes an int ele to the front
void SL_list::push_front(int ele) {

  // if list empty
  if (isEmpty()) {

    // set ele as the Node's head element
    head->ele = ele;
  } else {

    // initialize a pointer pointing to the new
    // Node in the heap
    Node *newNode = new Node;

    // setting the new node's variables
    newNode->ele = ele;
    newNode->next = head;

    // setting this newly created node as the head of the list
    head = newNode;
  }

  // we inserted a new node, length of the list increased
  length++;
}

// push element to the back of the list
void SL_list::push_back(int ele) {
  if (isEmpty()) {

    // if empty, just insert
    head->ele = ele;
  } else {

    // initialize a pointer to a new Node
    Node *newNode = new Node;

    // setting the new nodes elements using a pointer
    newNode->ele = ele;
    newNode->next = NULL;

    // temporary pointer pointing to the head Node
    Node *temp = head;

    // while the temporary node's next pointer != NULL
    while (temp->next != NULL) {

      // iterate further through the list
      temp = temp->next;
    }

    // once we find an empty spot, insert the new Node
    temp->next = newNode;
  }

  // increase the size of the list by one
  length++;
}

// pop_front
void SL_list::pop_front() {
  if (isEmpty()) {
    cout << "Error: Empty list!" << endl;
  } else {

    // initialize a temporary variable pointing to a new Node
    Node *temp = new Node;

    // temporary node stores the next Node after head
    temp = head->next;

    // delete the head
    delete head;

    // set temp to head
    head = temp;

    // decrease the length
    length--;
  }
}

void SL_list::print() {
  if (isEmpty()) {
    cout << "Error: Empty list!" << endl;
  } else {

    // temporary Node
    Node *temp = new Node;

    // pointing to the head node
    temp = head;

    // iterate until it does not evaluate to false
    while (temp) {

      // print the element
      cout << temp->ele << " ";

      // move the pointer one node further
      temp = temp->next;
    }
    cout << endl;
  }
}

// returns the value of length which is SL_list class private member
int SL_list::get_length() { return length; }

// add element to the front of the list
void SL_list::addFront(int ele) {

  // if empty, add the element
  if (isEmpty()) {
    head->ele = ele;

  } else {
    // initialize a pointer to a new Node
    Node *newNode = new Node;

    // newNode variable ele is the param passed (ele)
    newNode->ele = ele;

    // newNode's pointer points to the head (the old head after this   function
    // finished)
    newNode->next = head;

    // newly created Node set as the head node of the lits
    head = newNode;

    length++;
  }
}

// add element at to a specific index within the linked list
void SL_list::addMiddle(int ele, int index) {

  // if list empty or index 0
  if (isEmpty() || index == 0) {

    // insert ele as the head
    head->ele = ele;

    // if index < 0
  } else if (index < 0) {

    // operation invalid
    cout << "Cannot insert at a negative index."<<endl;
    return;

    // otherwise
  } else {

    // initialize a pointer to the new Node
    Node *newNode = new Node;

    // set the new node's value to ele
    newNode->ele = ele;

    // point to the head Node
    Node *currentNode = head;

    // iterate until index reached
    for (int i = 0; i < index - 1; i++) {

      // hop current pointer to the next node
      currentNode = currentNode->next;
    }

    // once out of the for loop, point new to the same as current
    newNode->next = currentNode->next;

    // assign newNode to the current's next pointer
    currentNode->next = newNode;
  }

  // increase length because of insertion
  length++;
}