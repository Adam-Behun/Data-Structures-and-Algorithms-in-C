#include <iostream>
using namespace std;

// function declaration
void sum(int*, int);

int main(){

    // initialize an array of size 3 
    int num[3] = {1,2,3};

    // call function sum and send the address of the first element and the size of the array
    sum(num, 3);

    // see what is num
    cout<<&num<<" --> Address of the first element"<<endl;
    cout<<num<<" --> Address of the first element"<<endl;
    cout<<&num[0]<<" --> Address of the first element"<<endl;

    return 0;
}

// returns nothing and takes in a pointer and an int
void sum(int *p, int size){
    int total = 0;


    for (int i = 0; i < size; i++){

        // 1. iteration (total = 1)
        // 2. iteration (total = total + num[1])
        // 3. iteration (total = total + num[2])
        // increase total int by the value of what ptr points to (dereferenced ptr) and increment pointer
        total += *p++;
    }
    cout<<total<<endl;
}