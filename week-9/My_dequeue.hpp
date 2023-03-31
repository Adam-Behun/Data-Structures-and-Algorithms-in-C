#ifndef MY_DEQUEUE_HPP
#define MY_DEQUEUE_HPP

#include "DList.hpp"


class My_dequeue {
private:
    DList list;
public:
    void push_front(int ele) {  // insert element at the front of the deque
        list.push_front(ele);   // add element
    }
    void push_back(int ele) {  // insert element at the back of the deque
        list.push_back(ele);   // add element
    }
    Node* begin() {            // get address of first node
        return list.begin();   // return address
    }
    void display() {           // display elements of the deque
        list.display();        // print the elements
    }
};

#endif