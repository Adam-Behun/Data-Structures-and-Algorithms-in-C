#include <iostream>
using namespace std;

int main(){

    // 2d array
    int a[2][3] = {1,3,5,7,9,11};
    
    // points to an array of 3 ints
    int (*p)[3] = NULL;

    int row, col;
    
    // p points to the first row of the array
    p = a;

    // goes twice
    for (row = 0; row < 2; row++){
        
        // goes 3 times
        for (col = 0; col < 3; col++){
            
            // address of a[0][0] + 0 dereferenced + 0 dereferenced = first spot in the array's first row
            // address of a[0][0] + 0 dereferenced + 1 dereferenced = second spot in the array's first row
            // address of a[0][0] + 0 dereferenced + 2 dereferenced = third spot in the array's first row
            // address of a[0][0] + 1 dereferenced + 0 dereferenced = a[1][0]
            cout<<*(*(p+row)+col)<<" ";
        }
    }

    return 0;
}