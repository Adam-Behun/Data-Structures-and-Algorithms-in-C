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
        cout<<"Constructor is called."<<endl;
    }

    // copy constructor taking in a reference of a different person object
    person(person& old_obj){
        cout<<"Copy constructor is called."<<endl;
    }
};

// taking 1 person param
void test(person obj){
    cout<<"Test!"<<endl;
}


int main(){

    // initialize Jason and set its name value to Jason and age value to 10
    person Jason("Jason", 10);

    // calls test function on Jason
    test(Jason);

    return 0;
}