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

// function received an address of a student object
// to accept an address of the object the param needs to be a pointer
void print(student*);

int main(){
    student* Alice = new student;
    cout<<"Student ID is: "<<Alice->id<<endl;

    student Bob(2);

    // send the address of a student Object as an arg
    print(&Bob);

    delete Alice;
    Alice = nullptr;

    return 0; 
}

void print(student *obj){
    cout<<obj->id<<endl;
}