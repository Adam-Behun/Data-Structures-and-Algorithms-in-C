#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    vector<int> test_1(a, a+5);

    for (int i=0; i<=5; i++){
        cout<<test_1[i]<<" ";
    }
    cout<<endl;

    return 0;
}