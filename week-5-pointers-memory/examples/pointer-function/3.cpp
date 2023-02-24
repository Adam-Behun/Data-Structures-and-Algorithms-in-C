#include <iostream>
using namespace std;


// int pointer to size 3 array
void sum(int (*p)[3]){
    int total = 0;

    // iterate over rows
    for (int row = 0; row < 2; row++){
        
        // iterate over columns
        for (int col = 0; col < 3; col++){
            
            // address at a specific row and column that is pointing to 
            // iteration 1 = p[0][0]
            // iteration 2 = p[0][1]
            // iteration 3 = p[1][0]
            total += p[row][col];
        }
    }
    cout<<total;
}


int main(){

    // 2-dimensional array -- how does it look like?
    // 1 2 3 
    // 4 5 6
    int num[2][3] = {{1,2,3}, {4,5,6}};

    // what is num?
    cout<<num<<" --> first element's address"<<endl;
    cout<<&num<<" --> first element's address"<<endl;
    cout<<*num<<" --> first element's address"<<endl; 
    cout<<&num[0][0]<<" --> first element's address"<<endl;
    cout<<**num<<" --> first element's value"<<endl; 
    cout<<num[0][0]<<" --> first element's value"<<endl;
    cout<<&num[1][0]<<" --> address 12 bytes further = num[1][0]"<<endl;
    cout<<num+1<<" --> address num[1][0]"<<endl;
    cout<<*num+1<<" --> address of num[0][1]"<<endl;
    cout<<**num+1<<" --> value at num[0][1]"<<endl;
    
    // hexadecimal goes 0 1 2 3 4 5 6 7 8 9 A B C D E F
    // does not work because you cannot dereference a specific index of an array - it already is a value
    //cout<<*num[0][0]<<" --> is this the first element = 1"<<endl;
    
    
    sum(num);

    return 0;
}