#include <iostream>
using namespace std;

int main(){
    int a[3] = {10, 20, 30};
    int *ptr = NULL;

    ptr = a; // same as ptr = &a[0]

    // 10
    cout<<*ptr<<endl;
    // 10 because it prints, then increments
    cout<<*ptr++<<endl;
    // 20 because it is incremented
    cout<<*ptr++<<endl;
    // 30 because it was incremeneted again
    cout<<*ptr<<endl;

    return 0;
}