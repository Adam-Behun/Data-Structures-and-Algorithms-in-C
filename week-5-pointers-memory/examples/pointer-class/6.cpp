#include <iostream>
using namespace std;


int main(){
    int a = 1;
    int b = 10;

    int *p1 = &a;
    int *p2 = &b;

    cout<<p1<<endl;
    cout<<*p1<<endl<<endl;

    p1--;

    cout<<p1<<endl;
    cout<<*p1<<endl<<endl;

    cout<<p2<<endl;
    cout<<*p2<<endl;

    return 0;
}