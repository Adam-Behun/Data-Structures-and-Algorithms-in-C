#include <iostream>
using namespace std;

int main(){

    // initialize an array of size 3 and assign 10, 20, 30 to it
    int a[3] = {10, 20, 30};

    // ptr points to the address of the element a[2]
    int *ptr = &a[2];

    // print dereferenced ptr = 30
    cout<<*ptr<<endl;

    // change the value of 30 to 100
    *ptr = 100;

    // prints 100
    cout<<a[2]<<endl;

    return 0;
}