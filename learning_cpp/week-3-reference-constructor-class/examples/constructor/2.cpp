#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    string name;
    int age;
    void print(){
        cout<<name<<" "<<age<<endl;
    }

    // this is how default constructor looks like - does not have to be here, it's automatic
    person(){}
};

int main(){
    person a;
    a.name = "Adam";
    a.age = 21;

    a.print();

    return 0;
}