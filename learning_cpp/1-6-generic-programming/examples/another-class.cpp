#include <iostream>
using namespace std;

template <typename T1, typename T2>
class student{
    public:
    T1 id;
    T2 age;
    student(T1 i, T2 a):id(i), age(a){}
};

int main(){
    student<int, int> Alice(1, 10);
    student<double, int> Bob(2.2, 10);
    student<int, double> Eve(2, 5.5);

    cout<<Alice.id<<" "<<Alice.age<<endl;
    cout<<Bob.id<<" "<<Bob.age<<endl;
    cout<<Eve.id<<" "<<Eve.age<<endl;

    return 0;
}