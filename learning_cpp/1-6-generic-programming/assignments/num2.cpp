#include <iostream>
using namespace std;

/* This code works but could be optimized and simplified further */

template <typename T>
class student{
private:

    T id;                   /* You should not change this line */
public:

    // was not a valid constructor
    student(){
        id = 1;
        cout<<"constructor was called"<<endl;}; 
 
    // generic function accepting 1 input param of any data type
    template <typename T1>
    void calculate_id(T1 input){

        // print out the result of adding id and input
        // both are of any data type
        cout<<id + input<<endl;
    }
    
    // generic function accepting 2 params of different data types
    template <typename T2, typename T3>
    void calculate_id(T2 input1, T3 input2){

        // print the sum of all 3 (2 params and 1 private data member)
        cout<<id + input1 + input2<<endl;
    }

};


int main(){

    // dynamically allocating memory for the objects
    student<int> *Alice = new student<int>();
    
    /* You should not change the codes below */
    Alice->calculate_id(1);         // Output should be 2
    Alice->calculate_id(1.3);       // Output should be 2.3
    Alice->calculate_id(1.3, 1.3);  // Output should be 3.6
    Alice->calculate_id(1, 1.3);    // Output should be 3.3
    /* You should not change the codes above */

    // bug because the heap memory was never released
    delete Alice;
    Alice = nullptr;

    return 0;
}