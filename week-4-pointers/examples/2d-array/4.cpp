#include <iostream>
using namespace std;

int main(){
    int a[2][3] = {1,2,3,4,5,9};

    // a+1 is the second row of the array
    // a is the first row of the array
    cout<<*(a+1) - *a<<endl;

    return 0;
}