#include "My_dequeue.hpp"
#include "DList.hpp"

// functions of dequeue implemented using the DList's structure
void My_dequeue::push_front(int ele) { list.push_front(ele); }

void My_dequeue::push_back(int ele) { list.push_back(ele); }

DList::Node *My_dequeue::begin() const { return list.begin(); }

void My_dequeue::display() const { list.display(); }