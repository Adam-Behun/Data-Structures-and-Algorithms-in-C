#include <iostream>
using namespace std;

int main(){

    // initialize an int var a and assign int 1 to it
    int a = 1;

    // initialize an int pointer variable and assign the address of the int variable a to it
    int *ptr = &a;

    // initialize an int pointervariable ptr2 and assign the address of ptr to it
    // understand what the address of ptr means. ptr is an int pointer variable and its value is a variable it points to
    int **ptr2 = &ptr;

    // print 1 = address of the int a
    cout<<&a<<endl;

    // print 2 = value of ptr = ptr is an int pointer variable and its value is the address of what it points to
    cout<<ptr<<endl;

    // print 3 = dereference the address of ptr = address of what it points to = address of a
    cout<<*&ptr<<endl;

    // print 4 = dereference operator "*" -- read as "value pointed to by ptr" prints 1
    cout<<*ptr<<endl;

    // print 5 = address of ptr dereferenced, that dereferenced is the value of what it points to
    cout<<**&ptr<<endl;

    // print 6 = 
    cout<<endl;

    // print 7 = address of a pointer
    cout<<&ptr<<endl;

    // value of ptr2 = address of the ptr pointer
    cout<<ptr2<<endl;

    // dereferenced pointer is its value which is the address of a
    cout<<*ptr2<<endl;

    // address of ptr2
    cout<<&ptr2<<endl;

    return 0;
}