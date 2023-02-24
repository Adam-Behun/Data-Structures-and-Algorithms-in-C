#include <iostream>
using namespace std;

int main(){

    // ptr points to the new int stored in heap
    int *ptr = new int(10);
    cout<<*ptr;

    // deallocate the memory and safely set the pointer
    delete ptr;
    ptr = nullptr;

    // ptr2 points to an int memory location in the heap
    int *ptr2 = new int();

    // initialize the dereferenced pointer to 2
    *ptr2 = 2;
    cout<<*ptr2<<endl;

    delete ptr2;
    ptr2 = NULL;

    return 0;
}