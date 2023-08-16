#include <iostream>
using namespace std;

int main(){
    int a[2][3] = {1,3,5,7,9,11};
    
    // create a pointer that is going to point to an array of 3 ints
    int (*p)[3] = NULL;

    // a pointer to 3 ints now points to the first row of the array
    p = a;

    // address of a[0][0]
    cout<<p<<endl;

    // address of a[0][0]
    cout<<*p<<endl;

    // 1 -- dereferenced p is the first row of the array, that's the first element's address, that dereferenced is its value
    cout<<**p<<endl;
}