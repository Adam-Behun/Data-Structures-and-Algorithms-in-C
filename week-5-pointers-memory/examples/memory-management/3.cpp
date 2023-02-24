#include <iostream>
using namespace std;

class Student{
    public:
    int id = 5;
};

int main(){

    // pointer of type Student
    Student *p = nullptr;

    // pointing to a new Student object stored in heap
    p = new Student;

    // access object's id using a pointer
    cout<<"Student id is "<<p->id<<endl;

    // release the memory p points to
    delete p;

    // set the pointer to nullptr because the pointer still exists after we delete the object Student using it
    p = nullptr;

    return 0;
}