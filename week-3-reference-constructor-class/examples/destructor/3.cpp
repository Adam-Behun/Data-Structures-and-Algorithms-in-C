#include <iostream>
using namespace std;

class Student{
    public:
    int id;
    double grade1, grade2;

    Student(){
        grade1 = 0;
        grade2 = 0;
    };

    Student(int a, double b, double c):id(a), grade1(b), grade2(c){
        cout<<"Create object."<<endl;
    }

    // destructor has no return type and no params
    ~Student(){
        cout<<"Delete object."<<endl;
    }

    double get_grade(){
        return (grade1 + grade2);
    }
};

int main(){

    // declare an array arr of size 2 and type Student
    Student arr[2];

    // first Student's object has a grade of 0
    cout<<arr[0].grade1<<endl;

    // second Student's object has a grade of 0
    cout<<arr[1].grade1<<endl;

    // deletes in reverse order
    return 0;
}