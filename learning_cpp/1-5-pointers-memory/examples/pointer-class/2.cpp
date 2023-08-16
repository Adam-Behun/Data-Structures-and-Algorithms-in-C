#include <iostream>
using namespace std;

class student{
    public:
    int id;
    student(int input):id(input){}
};

// takes in a pointer to a student object 
void renew(student *one){

    // access the id of the object *one points to and set it to 2
    one->id = 2;

    return;
}

int main(){

    // create an object Alice
    student Alice(1);

    // initialize a student pointer that points to the address of Alice
    student *p = &Alice;

    // access the object's public member using a pointer
    cout<<"The id of Alice is: "<<p->id<<endl;

    // call renew and pass a pointer to a student object
    renew(p);
    cout<<"The new id of Alice is: "<<p->id<<endl;

    return 0;
}