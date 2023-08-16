#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int *ptr = &a;

    // address of a
    cout<<ptr<<endl;

    // go to the address ptr points to and increase ++
    cout<<++*ptr<<endl;
    cout<<endl;

    // ptr points 4 bytes further now
    ptr++;

    // garbage
    cout<<ptr<<endl;

    // dereferenced garbage
    cout<<*ptr<<endl;

    return 0;
}