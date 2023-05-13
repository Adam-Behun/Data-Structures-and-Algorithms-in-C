#include <iostream>
using namespace std;

// declare a generic function that takes 2 inputs of different data types 
template <typename T1, typename T2>

// expecting a different data type for each parameter
void check_type(T1 a, T2 b){

    // compare type of a (T1) with int
    if (typeid(a) == typeid(int)){
        cout<<"T1 is of type int"<<endl;
    }

    // compare type of param b (T2) with double
    if (typeid(b) == typeid(double)){
        cout<<"T2 is of type double"<<endl;
    }
}

int main(){
    int a = 1;
    double b = 2;

    // passing 1 int a 1 double to the line 5
    check_type(a, b);

    return 0;
}