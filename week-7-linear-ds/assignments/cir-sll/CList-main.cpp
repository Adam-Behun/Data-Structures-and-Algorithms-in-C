#include "CList.h"
#include "CList.cpp"
#include <iostream>
using namespace std;

int main(){

  CList<int> myList;

  
  myList.push_front(76);
  myList.push_front(4);
  myList.push_front(1);
  
  myList.push_back(3);
  myList.push_back(4);
  myList.push_back(5);
  
  
  myList.insert(0, 9);
  myList.insert(1, 7);
  myList.insert(2, 8);
  myList.remove(1);
  
  cout<<"The list's length is "<<myList.get_length()<<endl;
  
  
  myList.display();
  
  return 0;
}