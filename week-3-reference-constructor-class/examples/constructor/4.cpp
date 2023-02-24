#include <iostream>
#include <string>
using namespace std;

class person{
    
    public:
    string name;
    int age;

    person(){
        name = "Default";
        age = 0;
        cout<<"Constructor 1 is called."<<endl;
    }

    person(int age_input):name("Default"), age(age_input){cout<<"Constructor 2 is called."<<endl;}

    person(string name_input, int age_input){
        name = name_input;
        age = age_input;
        cout<<"Constructor 3 is called."<<endl;
    }
};

int main(){

    // initialize a person array of size 3 and create 3 different objects 
    // first call sends 1 int as argument, second call sends string and int, third call is empty so default is called
    person arr[3] = {person(1),                 // first object constructor 2
                    person("John", 10), // second object constructor 3
                    person("joe", 34)};       // third object constructor 2

    return 0;
}