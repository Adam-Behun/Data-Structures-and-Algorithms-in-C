#include <iostream>
using namespace std;

int main(){

    // int pointer pointing an array of size 3 which is going to be the first row of this 2-d array
    int (*ptr)[3] = new int[2][3];

    // iterate over the rows
    for (int i=0 ; i<2 ; i++){

        // iterate overt he columns
        for (int j=0 ; j<3 ; j++){

            // (ptr+0) = 0 dereferenced is still 0; + dereferenced 0 from j --> set to 10
            *(*(ptr+i)+j) = 10;

/*          This is what the dereferenced pointer evaluates to using the nested loop             */
            
            // iteration 1: 0+0+0 = 00
            // iteration 2: 0+0+1 = 01
            // iteration 3: 0+0+2 = 02
            // iteration 4: 0+1+0 = 10
            // iteration 5: 0+1+1 = 11
            // iteration 6: 0+1+2 = 12

            cout<<ptr[i][j]<<" ";

            // Understand the syntax for set the value of what pointer points to and then how to retrieve it
            // Setting value of what ptr points to means u need to dereference the pointer, then set value for what it points to
        }
    }
    cout<<endl;

    // delete the pointer pointing to an array
    delete[] ptr;

    // set the pointer to nullptr
    ptr = nullptr;

    return 0;
}