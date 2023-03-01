#include <iostream>
using namespace std;

template <typename T, int max_size> class stack {
private:
  T arr[max_size]; // max size of the stack
  int length;

  // define any additional attributes here

public:

// Constructor
  stack();

  void push(T ele); // Print"Error: Stack Overflow" if the current size is
                    // larger than max_size
  void pop(); // Print"Error: Stak Overflow" if the current size is 0 or smaller
  void top(); // Print the top element in a stack. Print "Empty stack" if empty
  void size();    // Print the size of the stack
  void display(); // Print all elements
  bool empty();   // Return true if empty stack, otherwise return false
};

/* Body of the functions are written here, outside of class declaration */


int main(){
  
}