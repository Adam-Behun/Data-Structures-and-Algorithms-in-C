#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    vector<int> test_1(a, a+5);

    test_1.insert(test_1.begin() + 1, 10);
    for (int i=0; i<6; i++){
        cout<<test_1.at(i)<<" ";
    }
    cout<<endl;
    cout<<test_1.size()<<endl;

    return 0;
}