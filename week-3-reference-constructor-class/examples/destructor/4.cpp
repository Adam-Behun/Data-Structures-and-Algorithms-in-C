#include <iostream>
using namespace std;


class student{
    private:
    int id;

    public:
    student(int a):id(a){
        cout<<"(Conversion) constructor is called for ID: "<<id<<endl;
    }

    student(student &obj){
        cout<<"Copy constructor is called"<<endl;
        id = 3;
    }

    ~student(){
        cout<<"Destructor is called for ID: "<<id<<endl;
    }

    int get_id(){
        return id;
    }
};

int main(){

    // create an object Alice, class student, Alice has 1 private data id set to 1
    student Alice(1);
    cout<<"Student ID is: "<<Alice.get_id()<<endl;

    // conversion constructor is called for id 2
    // destructor is called for the temp object
    // Alice is is 2
    Alice = 2;
    cout<<"Student ID is: "<<Alice.get_id()<<endl;

    // create a new object Bob, copy constructor is called
    student Bob(Alice);
    cout<<"Student ID is: "<<Bob.get_id()<<endl;
    cout<<"Student ID is: "<<Alice.get_id()<<endl;

    // destroys the objects Alice and Bob 
    return 0; 
}