#include <iostream>
using namespace std;


int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    // & operator gives me the address of a variable
    cout<<&a<<endl;

    // int takes 4 bytes in memory
    cout<<&b<<endl;
    cout<<&c<<endl;
    cout<<&d<<endl;
    cout<<&e<<endl;
}