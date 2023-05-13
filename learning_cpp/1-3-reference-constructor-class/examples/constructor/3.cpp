#include <iostream>
#include <string>
using namespace std;

class person{

    // this is private
    string name;
    int age;

    // public methods
    public:

    // constructor with no params
    person(){
        name = "Default";
        age = 0;
        cout<<"Constructor 1 is called."<<endl;
    }

    // constructor with 1 int param
    person(int age_input):name("default"), age(age_input){cout<<"Constructor 2 is called."<<endl;}

    // constructor with 1 string param and 1 int param
    person(string name_input, int age_input){
        name = name_input;
        age = age_input;
        cout<<"Constructor 3 is called."<<endl;
    }
};


int main(){

/* All three statements create objects of class person using different constructors as they have different params */


    // calls constructor with no params
    person a;

    // calls constructor with 1 int param
    person b(10);

    // calls constructor with 1 string and 1 int param
    person c("Adam", 21);

    return 0;
}