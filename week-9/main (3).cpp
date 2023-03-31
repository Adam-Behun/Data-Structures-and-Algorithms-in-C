#include "My_dequeue.hpp"
#include <iostream>
using namespace std;

int main() {
    My_dequeue deque;
// Push elements to the front of the deque
    deque.push_front(1);
    deque.push_front(2);
    deque.push_front(3);
// Push elements to the back of the deque
    deque.push_back(4);
    deque.push_back(5);
    deque.push_back(6);
// Traverse the deque and print elements
    Node *node = deque.begin();
    cout << "Deque: ";
    while (node != NULL) {
        cout << node->ele << " ";
        node = node->next;
    }
    cout << endl;
    return 0;
}