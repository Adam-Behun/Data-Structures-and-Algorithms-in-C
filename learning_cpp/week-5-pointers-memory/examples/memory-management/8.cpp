#include <iostream>
using namespace std;


// class declaration
// all objects of this class have these specifics
class student{
    private:
    int id;

    public:
    student(int input){
        id = input;
        cout<<"Constructor is called."<<endl;
    }
    ~student(){
        cout<<"Destructor is called"<<endl;
    }
    void GetID(){
        cout<<"ID: "<<id<<endl;
    }

};

// returns a pointer to a student object
student* test(){

    // Alice is a pointer to a student object
    student *Alice = new student(1);

    // public method on Alice
    Alice->GetID();

    // Alice does not need to be deleted because it returns the pointer which points to the object
    return Alice;

}

int main(){

    // call test function and store the pointer it returns in ptr
    student *ptr = test();

    // deleting what ptr points to is the only object created in this program
    delete ptr;


    ptr = nullptr;

    return 0;
}