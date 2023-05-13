#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    string name;
    int age;
};

int main(){

    // initialize an object a and b of the person data type
    person a, b;

    // go to a and pull its name public data member
    a.name = "Jason";
    b.name = "John";
    a.age = 22;
    b.age = 20;

    cout<<a.name<<": "<<a.age<<endl;
    cout<<b.name<<": "<<b.age<<endl;

    return 0;
}