#include <iostream>
using namespace std;

int main(){
    int a[3] = {0};
    int *ptr = NULL;

    // points to the beginning of the array
    ptr = a;

    
    for(int i = 0; i < 3; i++){
        // cin into the location it points to, then increase
        cin>>*ptr++;
        // after the 3 iterations, ptr ends behind the array
    }
    for (int i = 0; i < 3; i++){
        // prints it from the back
        ptr--;
        cout<<" "<<*ptr<<endl;
    }

    return 0;
}