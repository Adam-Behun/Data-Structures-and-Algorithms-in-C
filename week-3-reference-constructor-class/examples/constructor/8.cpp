#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    string name;
    int age;

    person(string name_input, int age_input){
        name = name_input;
        age = age_input;
        cout<<"Constructor 1 is called."<<endl;
    }

    // copy constructor setting age to the age of the person that was passed to it
    person(const person& old_obj){
        age = old_obj.age;
        cout<<"Copy constructor is called."<<endl;
    }
};

// function that returns a person after creating a person
person test(){
    person Sam("Sam", 20);

    return Sam;
}


int main(){
    //calls test, test creates a person and ".age" prints the age of the created person
    cout<<test().age<<endl;

    return 0;
}