#include <iostream>
using namespace std;

int a = 0;      // static memory

class Student{
    public:
    int id = 10;
};

int main(){
    // int variable stored in stack
    int b = 1;

    // int pointer c pointing to NULL stored in stack
    int *c = NULL;
    
    // int pointer ptr stored in stack
    int *ptr = NULL;

    // int variable stored in static memory
    static int d = 0;

    // double pointer stored in heap
    double *e = new double;
    delete e;
    e = nullptr;

    // Student object stored in stack
    Student student;

    // Student pointer pointing to a new Student object stored in heap
    Student *s = new Student;

    // release the memory meaning delete the Student object
    delete s;
    s = nullptr;

    return 0;
}