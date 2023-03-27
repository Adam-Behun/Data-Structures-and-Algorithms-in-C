#include "DList.h"
#include <iostream>
using namespace std;

DList::DList(){

  // start with these two pointers = sentinel pointers
  header = new Node;
  trailer = new Node;

  // point to each other
  header->next = trailer;
  trailer->prev = header;

  // further in each way, there's nullptr
  trailer->next = nullptr;
  header->prev = nullptr;
  
  length = 0;
}

DList::~DList(){
  cout<<"Destructor was called"<<endl;

  // realease all heap memory
  clear();

  // release the sentinel nodes
  delete header;
  delete trailer; 
}

bool DList::is_empty(){
  if (length == 0){
    return true;
  } else {
    return false;
  }
}

void DList::push_front(int ele){

  if (is_empty()){
    
    // create a new Node
    Node *newNode = new Node;
    newNode->ele = ele;

    // insert in front
    newNode->prev = header;
    newNode->next = trailer;
    header->next = newNode;
    trailer->prev = newNode;

    length++;  
    
  } else {

    // create a new Node
    Node *newNode = new Node;
    newNode->ele = ele;

    // push the newNode further to the list
    newNode->next = header->next;
    newNode->prev = header;
    header->next->prev = newNode;
    header->next = newNode;

    length++;
  }  
}

void DList::display(){

  if (is_empty()){
    cout<<"List is empty."<<endl;
    return;
  } else {
    
    // point temp to the first actual element
    Node *temp = header->next;
    while (temp != NULL){

      if (temp != header && temp != trailer) {
        cout<<temp->ele<<" ";
      }

      // move further
      temp = temp->next;
    }
  cout<<endl;
  }
}

int DList::get_length(){
  return length;
}

void DList::push_back(int ele){

  if (is_empty()){
    
    push_front(ele);
    
  } else {
  
  // create the new Node and set its ele
  Node *newNode = new Node;
  newNode->ele = ele;

  // connect newNode with trailer  
  newNode->prev = trailer->prev;
  trailer->prev->next = newNode;
  newNode->next = trailer;
  trailer->prev = newNode;

  // increment length
  length++;
  }
}

void DList::insert(int index, int ele){
  
  // handle wrong input
  if (index < 0){
    cout<<"Wrong index"<<endl;
    return;
    
  // use the already implemented functions
  } else if (is_empty() || index == 0){
    push_front(ele);
    
  } else if (index >= length) {
    push_back(ele);
    
  } else {

    Node *newNode = new Node;
    newNode->ele = ele;

    // find the right index
    Node *temp = header;
    for (int i=0 ; i<index ; i++) {
      temp = temp->next;
    }
    
    // insert node
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;

    // increment length
    length++;
  }
}

void DList::pop_front(){
  
  if (is_empty()) {
    cout<<"Empty list."<<endl;
    return;
    
  } else {
    
    // point to the first node with ele
    Node *temp = header->next;
    header->next = temp->next;
    if (temp->next != nullptr) {
      temp->next->prev = header;
    }

    // release the node
    delete temp;

    // decrease length
    length--;
  }
}

void DList::pop_back(){

  if (is_empty()){
    cout<<"Empty list"<<endl;
    return;

  } else {

    // set temp to point to the end node
    Node *temp = trailer->prev;
    trailer->prev = temp->prev;

    // point one node further in the list
    if (temp->prev != nullptr){
      temp->prev->next = trailer;
    }

    delete temp;
    length--;
  }
}

void DList::remove(int index){
  
  if (is_empty()){
    cout<<"Empty list."<<endl;
    return;

  // handle errors  
  } else if (index < 0 || index >= length) {
    cout<<"Invalid index"<<endl;
    return;
    
  // use the already implemented functions  
  } else if (index == 0) {
    pop_front();
    
  } else if (index == length - 1) {
    pop_back();

  } else {

    // point to the first node
    Node *temp = header->next;

    for (int i=0 ; i<index ; i++) {
      temp = temp->next;
    }

    // release the node in that index
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
    length--;
  } 
}

// added function returning the index of a search element or the int -9999 for not found
// time complexity = O(n) as it has to go through the whole list in the worst case
int DList::search(int ele){
 
  int index = 0;
  Node *temp = header->next;

  // iterate until the end of the list
  while (temp != trailer) {

    // if search ele found
    if (temp->ele == ele) {

      // return its index
      return index;
    }

    // move further
    temp = temp->next;
    index++;
  }

  // return "not found"
  return -9999;
}

// clear function deleting all elements in the list
// used in destructor as well
void DList::clear(){

  // start in front and delete nodes
  Node *temp = header->next;
  while (temp != trailer) {

    // initialize another "temp" pointer next
    Node *next = temp->next;

    // delete temp
    delete temp;

    // go further
    temp = next;
  }

  // set the list to the initial settings like in the constructor
  header->next = trailer;
  trailer->prev = header;
  length = 0;
}