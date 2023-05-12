#include "DList.hpp"
#include <iostream>


// similar implementation to last week's Dlist.cpp
// I did not implement is_empty() function here
DList::DList() {
  header = nullptr;
  trailer = nullptr;
}

DList::~DList() {
  std::cout << "Destructor was called" << std::endl;
  while (header != nullptr) {
    Node *temp = header;
    header = header->next;
    delete temp;
  }
}

void DList::push_front(int ele) {

  Node *newNode = new Node(ele);
  
  if (header == nullptr){
    header = newNode;
    trailer = newNode;

  } else {
    header->prev = newNode;
    newNode->next = header;
    header = newNode;
  }
}

void DList::push_back(int ele) {

  Node *newNode = new Node(ele);
  if (trailer == nullptr) {
    header = newNode;
    trailer = newNode;

  } else {
    trailer->next = newNode;
    newNode->prev = trailer;
    trailer = newNode;
  }
}

void DList::display() const{
  if (header == nullptr) {
    std::cout << "List is empty." << std::endl;
    return;
  } else {
    Node *temp = header;
    while (temp != nullptr) {
        std::cout << temp->ele << " ";
        temp = temp->next;
      }
    std::cout << std::endl;
  }
}

DList::Node *DList::begin() const {
  return header;
}