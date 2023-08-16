#include <iostream>
using namespace std;

int main(){
    int a[10] = {0};

    // address of a[0]
    cout<<&a[0]<<endl;
    // address of a[1] - 4 bytes further
    cout<<&a[0]+1<<endl;
    // address of a[1]
    cout<<a+1<<endl;
    cout<<endl;

    // address of a[9]
    cout<<&a[9]<<endl;
    // address of a[10]
    cout<<&a[9]+1<<endl;
    // address of a[10]
    cout<<&a + 1<<endl;
    cout<<endl;

    // size of the array
    // points one address behind the array and subtracts it from the array a
    cout<<(&a[9]+1)-a<<endl;

    // address of the int one behind the array, its value, then subtract from array a 
    cout<<*(&a+1)-a<<endl;

    return 0;
}