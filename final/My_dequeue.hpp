#ifndef My_DEQUEUE_HPP
#define My_DEQUEUE_HPP

#include "DList.hpp"

class My_dequeue {
private:

    // using an object of the DList type
    DList list;

public:

    // functions for the My_dequeue class 
    void push_front(int ele);
    void push_back(int ele);
    DList::Node* begin() const;
    void display() const;
};

#endif