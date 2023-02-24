#include <iostream>
using namespace std;

class Student{
    public:
    int id;
    double grade1, grade2;

    // constructor w 3 params
    Student(int a, double b, double c):id(a), grade1(b), grade2(c){
        cout<<"Create object."<<endl;
    }

    // Destructor
    ~Student(){
        cout<<"Delete object."<<endl;
    }

    // returns double computed on the private data members of Student objects 
    double get_grade(){
        return (grade1 + grade2);
    }
};

int main(){
    // create Alice and initialize her private data members with 1, 100, 100
    Student Alice(1, 100, 100);

    // assign a variable _final with the return value of get_grade called on Alice
    double _final = Alice.get_grade();

    // print Alice's idea and _final computed on her grades
    cout<<"Student ID: "<<Alice.id<<". Final score is: "<<_final<<endl;

    return 0;
}