#include <iostream>
using namespace std;

int main(){
    int a = 1, b = 2, temp = 0;
    int *p1 = NULL, *p2 = NULL;

    // initializing pointers
    p1 = &a;
    p2 = &b;

    // comparing pointers and swapping them if pass
    if(*p1 < *p2){
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    cout<<"a: "<<*p1<<" b: "<<*p2<<endl;

    return 0;
}