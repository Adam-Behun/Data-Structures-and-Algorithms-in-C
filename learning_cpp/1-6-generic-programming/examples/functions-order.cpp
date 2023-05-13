#include <iostream>
using namespace std;

// takes in 1 param of any data type
template <typename T>
void print(T p){
    cout<<"The first function is called."<<endl;
    return;
}

// takes in 1 param of an int data type
void print(int p){
    cout<<"The second function is called."<<endl;
    return;
}

int main(){
    int a = 1;

    // function overloaded and the non-generic gets called because it is specialized for that data type
    print(a);

    return 0;
}