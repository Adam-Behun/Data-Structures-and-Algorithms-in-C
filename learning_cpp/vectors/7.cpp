#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> test_1;

    test_1.push_back(1);
    test_1.push_back(2);

    for (int i=0; i<2; i++){
        cout<<test_1.at(i)<<" ";
    }
    cout<<endl;
    cout<<&test_1<<endl;
    cout<<&test_1[0]<<endl;

    cout<<"-----"<<endl;
    test_1.push_back(3);
    cout<<&test_1<<endl;
    cout<<&test_1[0]<<endl;

    return 0;    
}