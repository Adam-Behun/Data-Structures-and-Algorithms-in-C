#include <iostream>
using namespace std;

int main(){
    int a[3] = {0};

    for (int i = 0; i < 3; i++){
        cin>>a[i];
    }
    for (int i = 0; i < 3; i++){
        cout<<" "<<a[i]; 
    }

    return 0;
}