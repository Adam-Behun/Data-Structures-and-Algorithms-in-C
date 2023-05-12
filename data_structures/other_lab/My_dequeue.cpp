#include "My_dequeue.hpp"
#include <iostream>
using namespace std;

int main() {
    My_dequeue deque;
// add elements to the front of the deque
    deque.push_front(2);
    deque.push_front(4);
    deque.push_front(6);
// add elements to the back of the deque
    deque.push_back(6);
    deque.push_back(4);
    deque.push_back(2);
// display elements of the deque
    cout << "Deque: ";
    deque.display();
    return 0;
}