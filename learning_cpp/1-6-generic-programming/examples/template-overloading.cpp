#include <iostream>
using namespace std;

// templates support overloading
// takes in 1 param of any type
template <typename T>
void print(T p){
    cout<<"The first function is called."<<endl;
    return;
}

// takes in 2 params of the same type
template <typename T1>
void print(T1 p1, T1 p2){
    cout<<"The second function is called."<<endl;
    return;
}

// takes in 2 params of 2 different types
template <typename T1, typename T2>
void print(T1 p1, T2 p2){
    cout<<"The third function is called."<<endl;
    return ;
}

int main(){
    int a = 1;
    double b = 2.2;

    print(a);
    print(a, a);
    print(a, b);

    return 0;
}