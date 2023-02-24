#include <iostream>
using namespace std;

int main(){
    // initialize an int var and assign the integer 1 to it
    int a = 1;

    // initialize an int pointer to point to the address of a
    // * means pointer var
    int *ptr = &a;

    // prints the address of int a
    cout<<&a<<endl;

    // prints the address of ptr
    cout<<&ptr<<endl;

    return 0;
}