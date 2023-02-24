#include <iostream>
using namespace std;

class student{
    public:
    int _id;
    string _name;

    // student constructor
    student(int id, string name){
        _id = id;
        _name = name;
    }
};

int main(){

    // construct a student object Alice
    student Alice(1, "Alice");

    // student pointer pointing to the address of Alice
    student *p = &Alice;

    // "->" operator accesses the object's public members "p" points to
    // understand what and how you are accessing
    cout<<p->_id<<" "<<p->_name<<endl;
    cout<<Alice._id<<" "<<Alice._name<<endl;
    cout<<&Alice<<endl;
    cout<<&Alice._id<<endl;
    cout<<&Alice._name<<endl;
    cout<<&p->_id<<endl;
    cout<<&p->_name<<endl;
    cout<<&p<<endl;

    return 0;
}