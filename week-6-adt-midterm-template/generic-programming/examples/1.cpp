#include <iostream>
using namespace std;

// declaring a generic function swap_num
// not initialized untill called from main
template <typename T>
void swap_num(T &, T &);

int main(){
    int a = 1, b = 2;

    // call to the generic function
    swap_num(a, b);
    cout<<a<<" "<<b<<endl;

    return 0;
}

template <typename T>

// two variables with the same data type
void swap_num(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}