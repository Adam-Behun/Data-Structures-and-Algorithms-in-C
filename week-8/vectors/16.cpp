#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m = 3, n = 4;
    vector<vector <int> > test(m, vector<int>(n, 0));
    for (int i=0; i<test.size(); i++){
        for (int j=0; j<4; j++){
            test.at(i).at(j) = j;
        }
    }
    vector<vector<int>>::iterator it;
    it = test.begin();

    vector<int>::iterator it2;
    it2 = it->begin();
    cout<<*it2<<endl;

    return 0;
}