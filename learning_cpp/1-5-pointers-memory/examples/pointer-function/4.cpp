#include <iostream>
using namespace std;

// function returns an int pointer
// takes in 2-d int array as a parameter
int *get(int arr[2][3]){

    // declare an int pointer
    int *pt = nullptr;
    
    // points to a[0][1] which is the value 2
    pt = *(arr) + 1;

    // points to a[1][0] which is the value 4
    //pt = *(arr + 1);

    return pt;
}

int main(){
    // initialize the 2-d array
    int a[2][3] = {1,2,3,4,5,6};

    // declare an int pointer
    int *p = NULL;

    // assign the return of get function to the int pointer
    // send the 2-d array name as argument
    p = get(a);

    // prints a dereferenced pointer which is the value it points to
    cout<<*p<<endl;

    return 0;
}