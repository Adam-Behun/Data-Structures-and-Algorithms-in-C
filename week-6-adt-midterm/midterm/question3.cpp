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

// function declaration
// takes a student object as a parameter 
void print(student obj){
    cout<<"This object's id is "<<obj.id<<endl;
}

int main(){

    // Alice points to a new student object stored in heap
    student *Alice = new student;

    // id of Alice can be accessed because it is public
    cout<<"Student ID is: "<<Alice->id<<endl;

    // calls copy constructor
    student (Bob);

    // print function takes a student object
    print(Bob);
    // destructed Bob bc function returned

    // this creates a COPY, COPY, COPY as function create COPIES COPIES COPIES and that is why it's id is 2
    // we can change this and let the function take in a pointer and then pass Alice
    print(*Alice);
    // destructed the copy because the function returned

    // deleting the object Alice points to, that's the only one on heap
    delete Alice;
    Alice = nullptr;

    return 0;
}