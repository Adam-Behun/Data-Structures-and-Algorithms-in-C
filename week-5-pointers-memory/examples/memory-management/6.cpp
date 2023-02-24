#include <iostream>
using namespace std;

class Student{
    private:
    int id = 5;

    public:
    int GetID(){
        return id;
    }
};

int main(){
    Student *p = nullptr;
    p = new Student;

    // access the public function of an object using -> operator
    cout<<"Student ID is: "<<p->GetID()<<endl;

    delete p;
    p = nullptr;

    return 0;
}