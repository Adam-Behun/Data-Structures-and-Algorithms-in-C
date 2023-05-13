#include <iostream>
using namespace std;

template <typename T1>
class student{
    private:
    T1 id_1;
    public:
    student(T1 input):id_1(input){}

    template <typename T2>
    void compare(T2 num){
        if (typeid(num) == typeid(int)){
            cout<<"int"<<endl;
        }
        if (num > id_1){
            cout<<"True"<<endl;
        }
    }
};

int main(){
    student<double> Alice(2.1);
    Alice.compare(3);

    return 0;
}