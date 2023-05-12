#include "DList.hpp"
#include <iostream>
using namespace std;

int main() {
    DList list;
// Add elements to front of the list
    list.push_front(2);
    list.push_front(4);
    list.push_front(6);
// Add elements to back of the list
    list.push_back(6);
    list.push_back(4);
    list.push_back(2);
// Display elements
    cout << "List: ";
    list.display();
    return 0;
}