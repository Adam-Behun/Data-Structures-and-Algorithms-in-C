#include <iostream>
#include <vector>
using namespace std;

/* 11A) 
int main(){
    vector<int> test(3);
    vector<int>::iterator it;

    for (int i=0; i<3; i++){
        test.at(i) = i;
    }

    it = test.begin();
    cout<<*it<<endl;

    return 0;
}

*/

/* 11B */

int main(){
    vector<int> test(3);

    for (int i=0; i<3; i++){
        test.at(i) = i;
    }

    int *it = test.begin();
    cout<<*it<<endl;

    return 0;
}
