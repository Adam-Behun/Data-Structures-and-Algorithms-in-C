#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m =3, n = 4;
    vector<vector <int> > test(m, vector<int>(n, 0));
    for (int i=0; i<test.size(); i++){
        for (int j=0; j<4; j++){
            test.at(i).at(j) = j;
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