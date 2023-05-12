#ifndef DLIST_HPP
#define DLIST_HPP
#include <iostream>
using namespace std;

// Define a doubly linked list Node class
class Node {
public:
    int ele;
    Node *prev;
    Node *next;
    Node(int ele=0, Node *prev=NULL, Node *next=NULL) {    // initialize elements and pointers
        this->ele = ele;
        this->prev = prev;
        this->next = next;
    }
};

class DList {
private:
    Node *head;
    Node *tail;
public:
    DList() {  // Constructor to initialize an empty list with nodes
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }
    ~DList() {  // Destructor to delete nodes
        Node *current = head;
        while (current != NULL) {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
    }
    void push_front(int ele) {  // Insert an element at the front of the list
        Node *node = new Node(ele, head, head->next);
        head->next->prev = node;
        head->next = node;
    }
    void push_back(int ele) {  // Insert an element at the back of the list
        Node *node = new Node(ele, tail->prev, tail);
        tail->prev->next = node;
        tail->prev = node;
    }
    Node* begin() {  // Get the address of the first node in the list
        return head->next;
    }
    void display() {  // Display elements in the list
        Node *current = head->next;
        while (current != tail) {
            cout << current->ele << " ";
            current = current->next;
        }
        cout << endl;
    }
};

#endif