#include <iostream>
using namespace std;

// function swap returns nothing and takes in two int pointers as params 
void swap(int*, int*);

int main(){

    // always initialize variables
    int num1 = 1, num2 = 2, *p1 = NULL, *p2 = NULL;

    // initializing pointers to point to the addresses of the ints
    p1 = &num1;
    p2 = &num2;

    // send int pointers as args to the function
    swap(p1, p2);
    cout<<"num1: "<<num1<<". num2: "<<num2<<endl;

    return 0;   
}


void swap(int *p1, int *p2){
    int temp;

    // using temp to swap the values
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}