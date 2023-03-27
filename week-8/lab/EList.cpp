#include "EList.hpp"
#include <iostream>
using namespace std;

EList::EList() {

  // construct the object of MiddleNode class
  middle = new MiddleNode();

  // calling function
  build_data_structure(); 
}

EList::~EList() {
  cout << "Destructor is Called." << endl;
  
  // delete nodes
  delete middle->north;
  delete middle->east;
  delete middle->south;
  delete middle->west;
  delete middle;
}

void EList::build_data_structure() {

  // create new Nodes
  middle->north = new Node();
  middle->east = new Node();
  middle->south = new Node();
  middle->west = new Node();

  // all point to the middle node
  middle->north->next = middle;
  middle->east->next = middle;
  middle->south->next = middle;
  middle->west->next = middle;

  // set ele values
  // west, north, east, south, middle
  middle->west->ele = 1;
  middle->north->ele = 2;
  middle->east->ele = 3;
  middle->south->ele = 4;
  middle->ele = 5;
}

void EList::display() {

  // print out the elements of the nodes
  cout << middle->west->ele << " ";
  cout << middle->north->ele << " ";
  cout << middle->east->ele << " ";
  cout << middle->south->ele << " ";
  cout << middle->ele << " ";
  cout<<endl;
  return;
}