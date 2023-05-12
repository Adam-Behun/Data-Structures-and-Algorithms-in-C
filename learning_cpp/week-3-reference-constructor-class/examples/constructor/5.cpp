#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    string name;
    int age;

    // no params
    person(){
        name = "Default";
        age = 0;
        cout<<"Cosntructor 1 is called."<<endl;
    }

    // 1 int param
    person(int age_input):name("Default"), age(age_input){cout<<"Constructor 2 is called"<<endl;}

    // 1 string param and 1 int param
    person(string name_input, int age_input){
        name = name_input;
        age = age_input;
        cout<<"Constructor 3 is called"<<endl;
    }
};

int main(){

    // initialize a person type object Jason and set its name and age data members
    person Jason("Jason", 10);

    // create a new object John of person data type and pass the object Jason as an argument
    person John(Jason);

    // access John's public data member name
    cout<<John.name<<endl;
    cout<<Jason.name<<endl;

    return 0;
}