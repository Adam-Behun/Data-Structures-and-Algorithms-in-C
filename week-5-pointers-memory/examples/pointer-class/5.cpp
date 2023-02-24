#include <iostream>
using namespace std;

int main(){
    int a = 1;  // stack
    int b = 10; // stack


    int *p1 = &a;
    int *p2 = &b;

    p1--;
    cout<<*p1<<endl;
    cout<<*p2<<endl;

    return 0;
}