#include <iostream>
using namespace std;

int main(){
  int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int *ptr = NULL;    

  //ptr first points to the first location at the array
  //increments ++ until reaches end of the array
  for(ptr = &a[0][0]; ptr < &a[0][0]+12; ptr++){

    //print the value where ptr points to with every iteration
    cout<<*ptr<<" ";
  }
  cout<<endl;

  return 0;
}