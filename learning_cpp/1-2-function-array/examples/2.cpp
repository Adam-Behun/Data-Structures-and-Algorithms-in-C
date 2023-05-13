#include <iostream>
using namespace std;

// Declaring the 3 functions, there params, and return types
void add(int, int);
void add(int []);
void add(double, double);

// Interface for the program
int main(){
  
  // Initializing the variables used in this program
  int a = 1, b = 2; 
  int arr[2] = {1, 2}; 
  double c = 0.1, d = 0.2; 

  // Calling the functions
  add(a, b); 
  add(arr);  
  add(c, d); 
 
  return 0;
}

// Adding two integers. From main() two params are coppied into this function. 
void add(int a, int b){
  
  // int sum is initialized
  int sum;
  
  // Computation
  sum = a + b;

  // Checking the result as void does not return a value back to main()
  cout << sum << endl;
  
  return;
}

// Takes in array of ints as params from main. Copies them into array aything. 
void add( int anything[]){

  // Initialize int sum variable
  int sum_array;

  // Computation based on indexes
  sum_array = anything[0] + anything[1];

  // Check the result
  cout << sum_array << endl;
  return;
}

// Takes in two double params from main, copies them into x, y variables
void add(double x,double y){
  
  double sum_double;
  
  sum_double = x + y;
  
  cout << sum_double << endl;
  
  return;
}