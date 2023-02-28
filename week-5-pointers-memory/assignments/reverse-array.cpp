#include <iostream>
using namespace std;

// takes in pointer to first element of the array, and an int, returns a pointer
double* reverse(double*, int);

int main(){
  int size;
  double *p = NULL;
    
  // prompt user for size of the array
  cout<<"What is the size of your array? "<<endl;
  cin>>size;

  // prompt user for elements of the array
  cout<<"Elements in your array: "<<endl;

  // arr is pointing to a dynamic array
  double *arr = new double[size];

  // input elements into the array
  // "p = arr" pointer is at the beginning of the array, "p < arr + size" iterates to its end
  for (p = arr; p < arr + size; ++p){
    cin>>*p;
  }
  
  // pass pointer to first element of the array, size
  reverse(arr, size);

  // moves arr to spot "array[0][0]"
  arr++;
  cout<<"Reverse: "<<endl;

  // same iterator as above, prints the reversed array
  for (p = arr; p < arr + size; ++p){
    cout<<*p<<" ";    
  }
  cout<<endl;
   
  return 0;
}

// takes in pointer to first element of the array, and an int size, returns a pointer
double* reverse(double* p1, int size){

  // variables used for swapping the values  
  double temp;
  double *a = NULL;
  double *b = NULL;

  // iterate over the array using pointers, a from start, b from end until meet in the middle
  for (a = p1, b = p1 + size; a < b; a++, b--){

    // swapping values using pointers and temp variable
    temp = *a;
    *a = *b;
    *b = temp;
  }

  // returning a pointer to the beginning of now reversed array
  return p1;
}