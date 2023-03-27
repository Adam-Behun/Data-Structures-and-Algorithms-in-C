#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> test(3);
    for (int i=0; i<test.size(); i++){
        for (int j=0; j<4; j++){
            test.at(i).push_back(j);
        }
    }
    for (int i=0; i<test.size(); i++){
        for (int j=0; j<4; j++){
            cout<<test[i].at(j)<<" "; 
        }
        cout<<endl;
    }

    return 0;
}