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

    // passing the address of an object
    person(person& old_obj){
        cout<<"Copy constructor is called."<<endl;
    }
};

int main(){

    // initialize an object person
    person Jason("Jason", 10);

    // assign Jason to Sam
    person Sam = Jason;

    // create a new object Adam and send the object Jason as the one to copy from
    person Adam(Jason);

    // empty line = Sam is not initialized
    cout<<Sam.name<<endl;

    // original Jason
    cout<<Jason.name<<endl;

    // set adam's name to adam
    Adam.name = "Adam";
    cout<<Adam.name<<endl;

    return 0;
}