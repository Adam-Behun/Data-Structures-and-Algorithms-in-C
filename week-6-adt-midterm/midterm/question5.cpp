#include <iostream>
using namespace std;

int main(){
    int num = 1;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout<<*ptr1<<" --> 1"<<endl;
    cout<<ptr1<<" --> address of num"<<endl;
    cout<<&ptr1<<" --> address of ptr1"<<endl<<endl;

    cout<<*ptr2<<" --> address of num"<<endl;
    cout<<*&ptr2<<" --> address of ptr1"<<endl;
    cout<<ptr2<<endl;
    cout<<**&ptr2<<" --> address of num"<<endl<<endl;

    cout<<*ptr3<<" --> address of ptr1"<<endl;

}