#include <iostream>
using namespace std;

int main(){
    int a[3] = {10, 20, 30};

    // address of the first element of the array
    cout<<a<<endl;
    // address of the first element of the array
    cout<<&a<<endl;
    // value at the first element of the array
    cout<<*a<<endl;
    // address of the first element of the array
    cout<<&a[0]<<endl;
    // value at the first spot
    cout<<a[0]<<endl;

    return 0;
}