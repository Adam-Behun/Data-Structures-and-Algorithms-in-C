#include <iostream>
using namespace std;

int main() {
  int a = 1; 

  // initialize an int pointer "ptr" to point to the location of "a"
  int *ptr = &a; 

  // initialize an int pointer "ptr2" that point to the location of "ptr" pointer
  int **ptr2 = &ptr; 

  // prints the value of a --> 1
  cout << a << endl;

  // prints the memory location of a --> 0x7fff4139930c
  cout << &a << endl; 
  cout << endl;

  // prints value of the pointer -->  0x7fff4139930c (memory location of a)
  cout << ptr << endl;

  // prints the value of what the pointer ptr points to --> 1 (variable a)
  cout << *ptr << endl; 

  // prints the location ptr --> 0x7fff41399310 (memory loc of ptr variable)
  cout << &ptr << endl; 
  cout << endl;

  // prints the location of a --> 0x7fff4139930c
  cout << *&ptr << endl;  

  // prints the value of a --> 1
  cout << **&ptr << endl; 
  cout << endl;

  // prints the value of ptr2 --> 0x7fff41399310 (ptr2 points to ptr, so shows the value ptr)
  cout << ptr2 << endl; 

  // prints the value of what the pointer ptr2 points to --> 0x7fff4139930c
  cout << *ptr2 << endl; 

  // prints the location of a -->  0x7fff4139930c
  cout << **&ptr2 << endl; 
  cout << endl;

  return 0;
}