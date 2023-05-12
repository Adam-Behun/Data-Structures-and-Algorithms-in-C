#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> test(5);
    vector<int>::iterator it;

    test.push_back(4);
    for (int i=0; i<4; i++){
        test[i] = 2;
    }

    for (it = test.begin(); it != test.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<test.size()<<endl;

    return 0;
}