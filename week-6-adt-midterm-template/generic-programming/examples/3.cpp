#include <iostream>
using namespace std;


// generic function definition
template <typename T>

// takes in a reference of a and b and any data type of these two variables
void swap_num(T &a, T &b){

    // initializes temp with the same data type as the variables a and b
    T temp = a;
    a = b;
    b = temp;
    return;
}

int main(){

    // ints a and b
    int a = 1, b = 2;

    // passed to the function
    swap_num(a, b);
    cout<<a<<" "<<b<<endl;

    double c = 1.1, d = 2.2;
    swap_num(c, d);
    cout<<c<<" "<<d<<endl;

    return 0;
}