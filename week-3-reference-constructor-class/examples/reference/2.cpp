#include <iostream>
using namespace std;

// pass-by-reference
// function takes in the address of the int and changes it
void swap(int &a, int &b){
    int temp;

    temp = a;
    a = b;
    b = temp;
};

int main(){
    int num1 = 1, num2 = 2;

    swap(num1, num2);
    cout<<"num1: "<<num1<<" num2: "<<num2<<endl;

    return 0;
}