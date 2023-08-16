#include <iostream>
using namespace std;

// returns an int pointer
int *get(){
    int value = 10;
    int *pt;

    pt = &value;

    return pt;
}

int main(){
    // must be declared as a pointer because it is storing the return of the function
    int *p = NULL;

    // call get() and store it in int pointer p
    // p is pointing not to *pt but straight to value
    p = get();

    // dereferenced pointer gives us the value it points to
    // 10
    cout<<*p<<endl;

    return 0;
}