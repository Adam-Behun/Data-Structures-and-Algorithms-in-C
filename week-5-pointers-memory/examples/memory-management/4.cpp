#include <iostream>
using namespace std;

int main(){

    // allocate memory for an int array of size 3, not initialized
    int *ptr = new int[3]; 

    // address of ptr in stack
    cout<<ptr<<endl;
    
    // value of ptr is 0 as that's what the array is initialized to
    cout<<*ptr<<endl;
    // 3 iterations
    for (int i=0 ; i<3 ; i++){
        
        // dereference (ptr+i) which is 
            // iterations move the pointer i spots further and set them to the value of i
        *(ptr+i) = i;

        // print the array 
        cout<<*(ptr+i)<<" ";
    }

    cout<<endl;
    for (int i=0 ; i<3 ; i++){
        
        // ptr at spot 0, 1, 2 is set to 0+3, 0+4, 0+5
        ptr[i] = i+3;

        // print the ptr using an index of the array it points to
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    // delete the array ptr points to
    delete[] ptr;

    //set ptr to nullptr because delete only deletes what ptr points to
    ptr = nullptr;

    return 0;
}