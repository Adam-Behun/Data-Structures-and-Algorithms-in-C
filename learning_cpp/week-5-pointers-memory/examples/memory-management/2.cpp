#include <iostream>
using namespace std;

int main(){

    // initialize an int pointer stored in stack pointing to a int variable stored in heap
    int *myInt1 = new int(1);
    int *myInt2 = new int(2);
    int *myInt3 = new int(3);

    cout<<"The address is: "<<&myInt1<<endl;
    cout<<"The address is: "<<&myInt2<<endl;
    cout<<"The address is: "<<&myInt3<<endl;

    delete myInt1;
    delete myInt2;
    delete myInt3;

    return 0;
}