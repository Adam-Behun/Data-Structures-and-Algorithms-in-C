#include <iostream>
using namespace std;

// declare a generic function
template <typename T>

// returns T and takes a pointer to an array of type T
// T can be any data type (imagine it as int)
T find_max(T *a, int size){

    // the first value of the element is assigned to max which is of any data type
    T max = a[0];

    // loops over the array
    for (int i=1; i<size; i++){

        // compares max to the current element
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int main(){

    // initialize an int array of size 3
    int a[3] = {1,2,3};

    // initialize a double array of size 3
    double b[3] = {1.1, 2.2, 3.3};
    
    // pass a pointer to the first element of the array and its size
    cout<<find_max(a, 3)<<endl;
    cout<<find_max(b, 3)<<endl;

    return 0;
}