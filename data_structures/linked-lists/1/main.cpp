#include "SLL.cpp"
#include "sll.h"
#include <iostream>
using namespace std;

int main() {

  // calls the constructor of the SL_list class
  // newList consists of Nodes which have
  // int ele, and a Node pointer to the next Node
  // SL_list class has a Node pointer to the head
  // and an int length of the full list
  SL_list newList;

  newList.print();

  newList.push_front(1);
  newList.push_back(2);
  newList.push_back(3);
  newList.push_back(4);
  newList.push_back(5);
  
  newList.print();
  
  cout << "The length: " << newList.get_length() << endl;

  /*
  newList.addFront(5);
  newList.addFront(8);
  newList.addFront(9);
  */
  
  newList.addMiddle(10, 1);
  
  newList.print();

  cout << "The length: " << newList.get_length() << endl;
  
  return 0;
}