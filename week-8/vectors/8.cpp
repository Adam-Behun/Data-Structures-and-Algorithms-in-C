#include <iostream>
#include <vector>
using namespace std;

// example 8A)

///*
int main(){
    vector<int> test;

    for (int i=0; i<3; i++){
        test.push_back(i);
        cout<<&test[0]<<endl;
    }

    return 0;
}
//*/

// example 8B)

/*
int main(){
    vector<int> test;
    test.reserve(3);

    for (int i=0; i<3; i++){
        test.push_back(i);
        cout<<&test[0]<<endl;
    }

    return 0;
}

*/