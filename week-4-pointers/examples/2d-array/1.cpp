#include <iostream>
using namespace std;

int main(){
    // 2 rows and 3 columns 
    // 1 3 5
    // 7 9 11
    int a[2][3] = {1,3,5,7,9,11};
    int *p = NULL;

    // a[0] points to the first row of elements
    // iterate until the address p points to is not 6 int spots behind the first element of the array
    for(p = a[0]; p<&a[0][0]+6; p++){

        // the value of a pointer is an address
        // dereference pointer is the value it is pointing to
        cout<<p<<" "<<*p<<endl;
    }

    return 0;
}