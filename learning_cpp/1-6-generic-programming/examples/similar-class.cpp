#include <iostream>
using namespace std;

class student_1{
    public:
    int id;
    int age;
    student_1(int i, int a):id(i), age(a){}
};

class student_2{
    public:
    double id;
    int age;
    student_2(double i, int a):id(i), age(a){}
};

class student_3{
    public:
    int id;
    double age;
    student_3(int i, double a):id(i), age(a){}
};

int main(){
    student_1 Alice(1, 10);
    student_2 Bob(2.2, 15);
    student_3 Eve(3, 32.3);

    return 0;
}