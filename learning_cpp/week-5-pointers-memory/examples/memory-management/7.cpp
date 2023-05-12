#include <iostream>
using namespace std;

class student{
    private:
    int id;

    public:
    student(int input){
        id = input;
        cout<<"Constructor was called for "<<id<<endl;
    }

    ~student(){
        cout<<"Destructor is called for "<<id<<endl;
    }

    void GetID(){
        cout<<"ID is:"<<id<<endl;
    }
};

int main(){

    // pointer Alice points to the newly inititialized student with id =1
    student *Alice = new student(1);

    // access the public method of Alice using a pointer
    Alice->GetID();

    // delete the object Alice points to
    delete Alice;

    // set Alice as a pointer to 0
    Alice = nullptr;

    return 0;
}