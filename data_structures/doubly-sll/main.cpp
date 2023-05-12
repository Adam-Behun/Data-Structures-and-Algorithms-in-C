#include "DList.h"
#include "DList.cpp"
#include <iostream>
using namespace std;

// testing the implementation
int main() {
    
    DList myList;


    myList.push_back(1);
    myList.push_back(5);
    myList.push_front(9);
    myList.push_front(4);

    cout << "My list: ";
    myList.display();

    // testing search function
    cout<<"Is element 2 in the list? (-9999 for not found, otherwise return index): "<<myList.search(2)<<endl;
    cout<<"Is element 5 in the list? (-9999 for not found, otherwise return index): "<<myList.search(5)<<endl;
    myList.pop_front();
    myList.display();
    myList.pop_back();
    myList.display();
    myList.insert(1, 3);
    myList.display();
    myList.remove(2);
    myList.display();

    // testing clear function
    myList.clear();
    cout<<"List after clear function"<<endl;
    myList.display();
  
    return 0;
}