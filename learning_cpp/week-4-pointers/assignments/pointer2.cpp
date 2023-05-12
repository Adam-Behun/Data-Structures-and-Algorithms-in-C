#include <iostream>
using namespace std;

int main(){
  int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
  int (*ptr)[4] = NULL;     // You should not change the declaration of this pointer

//The array looks like this:

// 1 2 3 4
// 5 6 7 8 
// 9 10 11 12 

  //row for the row number, col for the column number
  int row, col;

  // ptr points to a[0][0]
  ptr = a;

  // starts at row 0 -> goes to the second for loop -> increments until row 3
  for(row = 0; row < 3; row++){

    // starts at column 0 -> goes to the first for loop -> increments until column 4
    for(col = 0; col < 4; col++){

      // with every iteration (12 total), print the value that ptr points to
      cout<<*(*(ptr+row)+col)<<" ";
    }
  }
  cout<<endl;

  return 0;
}