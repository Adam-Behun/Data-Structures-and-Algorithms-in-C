#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    int id;
    string name;

    // 
    student(int a, string b):id(a), name(b){
        cout<<"Constructor is called for: "<<name<<" "<<id<<endl;
    }

    // copy constructor, accepts addresses of student's objects
    student(student &obj){
        cout<<"-------------"<<endl;

        // prints the old object's name and id
        cout<<"Copy constructor is called for: "<<obj.name<<" "<<obj.id<<endl;

        // set the new object's private members to these
        name = "Bob";
        id = obj.id + 1;

        // access the new object's private members
        cout<<"Now, the object is: "<<name<<" "<<id<<endl;
        cout<<"-------------"<<endl;
    }

    ~student(){
        cout<<"Destructor is called for: "<<name<<" "<<id<<endl;
    }

    int get_id(){
        return id;
    }
};
    // accepts students as params
    void Func(student obj){

        // calling a copy constructor
        student Bob(obj);

        // Bob is of class student and so supports get_id public method
        cout<<"Bob's ID is: "<<Bob.get_id()<<endl;

        return;
}

int main(){

    // create an object Alice, constructor is called
    student Alice(1, "Alice");
    cout<<"Call func"<<endl;
    cout<<"--------"<<endl;

    // sends Alice as an argument
    Func(Alice);

    return 0;
}