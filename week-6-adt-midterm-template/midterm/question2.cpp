#include <iostream>
using namespace std;

class student{
    public:
    int id;

    student():id(3){cout<<"Constructor is called for ID "<<id<<endl;}
    student(int input):id(input){cout<<"Constructor is called for ID "<<id<<endl;}
    student(student &obj){id = 2;}

    ~student(){
        cout<<"Destructor is called for "<<id<<endl;
    }
};

void functionA(){
    student Bob;
    cout<<"Student ID is: "<<Bob.id<<endl;
}

int main(){

    // Constructor is called for ID 1
    student Eve(1);

    // no print
    student Alice(Eve);

    // Constructor is called for ID 3
    // Student ID is: 3
    functionA();
    // Destructor is called for 3
    // Student ID is: 1
    cout<<"Student ID is: "<<Eve.id<<endl;
    // Student ID is: 2
    cout<<"Student ID is: "<<Alice.id<<endl;

    return 0;
    // Desrtuctor is called for 2
    // Destructor is called for 1
}