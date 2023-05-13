#include <iostream>
using namespace std;

int main(){
    int a[3] = {10, 20, 30};
    int *ptr = NULL;

    ptr = a;

    // address of a[0]
    cout<<ptr<<endl;
    // address of a[1]
    cout<<(ptr + 1)<<endl;
    // address of a[1]
    cout<<&a[1]<<endl;
    // 20
    cout<<*(ptr + 1)<<endl;
    // 2020
    cout<<*&a[1]<<a[1]<<endl;
    cout<<endl;
    // points to 30
    ptr = ptr + 2; 
    // 30
    cout<<ptr[0]<<endl;
    10
    cout<<a[0]<<endl;
    // 20
    cout<<ptr[-1]<<endl;

    return 0;
}