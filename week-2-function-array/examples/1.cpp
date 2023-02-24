#include <iostream>
using namespace std;

// Declaring the function. Takes in two int parameters and returns an int param.
int area(int, int);

// Start of the program, interface for the program to run
int main(){
  // Declaring two variables int a, b
  int a, b;
  
  // Prompt the user for two inputs. Stored in a, b variables
  cin >> a;
  cin >> b;

  // Compiler gets to "area(a,b)", that's the function call and goes to the function int area initialized in the line 23. Main function passes the two params int a, b. Those will be as copies (arguments) in the int area variables a, b. Once area function returns, main prints the output int.
  cout << "Area is: " << area(a,b) << "." << endl;

  return 0;
}

  // Initializing the function with params int a, b. Params are passed in from the main function.
int area(int a, int b){
  
  // Initializing a variable result storing the result 
  int result;

  // Computation of the area 
  result = a * b;

  // Returning the result to the main function. This variable will disappear from the memory as soon asthe function returns.
  return result;
}