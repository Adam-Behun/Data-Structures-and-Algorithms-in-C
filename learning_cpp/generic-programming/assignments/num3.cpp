// 3. According to question 2, please define all the functions (i.e., void calculate_id) outside the class. 

#include <iostream>
using namespace std;

// class definition
template <typename T>
class student{
private:
    T id;                   /* You should not change this line */
public:
    student(){
        id = 1;
        cout<<"constructor was called"<<endl;
    };

    // declaring the functions
    template <typename T1>
    void calculate_id(T1 input);

    template <typename T2, typename T3>
    void calculate_id(T2 input1, T3 input2);
}; // end of class definition


// implementations of functions outside of the class
template <typename T>
template <typename T1>
void student<T>::calculate_id(T1 input){
    cout<<id + input<<endl;
}

template <typename T>
template <typename T1, typename T2>
void student<T>::calculate_id(T1 input1, T2 input2){
    cout<<id + input1 + input2<<endl;
}

int main(){

    //calling constructor for Alice but with no arguments
    student<int> *Alice = new student<int>();
    
    /* You should not change the codes below */
    Alice->calculate_id(1);         // Output should be 2
    Alice->calculate_id(1.3);       // Output should be 2.3
    Alice->calculate_id(1.3, 1.3);  // Output should be 3.6
    Alice->calculate_id(1, 1.3);    // Output should be 3.3
    /* You should not change the codes above */

    // releasing the heap memory
    delete Alice;
    Alice = nullptr;

    return 0;
}