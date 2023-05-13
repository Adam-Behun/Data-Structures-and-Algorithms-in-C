#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> test;
    test.reserve(3);

    for (int i=0; i<2; i++){
        test.push_back(i);
        cout<<&test[0]<<endl;
    }
    cout<<test.size()<<endl;

    return 0;
}