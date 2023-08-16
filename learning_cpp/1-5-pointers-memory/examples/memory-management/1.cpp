#include <iostream>
using namespace std;

int main(){

    // int pointer stored in heap pointing to an array stored in heap
    int *myInt = new int(10);

    cout<<"The size of memory: "<<sizeof(*myInt)<<endl;
    cout<<"The size of pointer: "<<sizeof(myInt)<<endl;
    cout<<"The value is: "<<*myInt<<endl;

    delete myInt;

    return 0;
}