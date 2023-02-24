#include <iostream>
using namespace std;

int main(){
    
    // initialize an array of size 3
    // saved in stack 
    // not dynamic
    int banana[3] = {0};
    
    cout<<&banana[0]<<" --> Address of the first element of the array"<<endl;
    cout<<banana<<" --> Address of the first element of the array"<<endl;
    cout<<&banana<<" --> Address of the first element of the array"<<endl<<endl;
    cout<<banana[0]<<" --> 0"<<endl;
    cout<<banana[1]<<" --> 0"<<endl;
    cout<<banana[2]<<" --> 0"<<endl;
    cout<<*banana<<" --> 0"<<endl<<endl;

    for (int i=0 ; i<3; i++){
        banana[i] = i;
    }

    cout<<&banana[0]<<" --> address of the first element"<<endl;
    cout<<&banana[1]<<" --> address of the second element"<<endl;
    cout<<&banana[2]<<" --> address of the third element"<<endl;
    cout<<&banana[3]<<" --> address of the fourth element (one spot behind the array)"<<endl<<endl;
    
    cout<<banana[0]<<" --> 0"<<endl;
    cout<<banana[1]<<" --> 1"<<endl;
    cout<<banana[2]<<" --> 2"<<endl;
    cout<<banana[3]<<" --> garbage (does not exist) in the array"<<endl;

    return 0;
}