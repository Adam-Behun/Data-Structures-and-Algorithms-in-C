#include <iostream>
using namespace std;

template <typename T, int size>
class Carray{
    private:
    T arr[size];
    public:
    void print(){
        for (int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Carray<int, 3> a;
    Carray<double, 3> b;

    a.print();
    b.print();

    return 0;
}