#include <iostream>
using namespace std;

class student{
    private:
    int id;

    public:
    student(int a):id(a){
        cout<<"(Conversion) constructor is called"<<endl;
    }

    student(student &old_obj){
        cout<<"Copy constructor is called"<<endl;
    }

    int get_id(){
        return id;
    }
};

int main(){
    student Alice(1);
    cout<<"Student ID is: "<<Alice.get_id()<<endl;

    // 2 -> temp class -> Alice(2)
    // conversion constructor uses temporary class
    Alice = 2;
    cout<<"Student ID is: "<<Alice.get_id()<<endl;

    return 0;
}