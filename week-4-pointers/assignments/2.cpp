#include <iostream>
using namespace std;

int main() {

  int a = 3; // initialize an int a = 3

  cout << *&a << endl; // prints 3
  cout << a << endl;   // prints 3
  cout << a++ << endl; // prints 3 (only after print increases to 4)
  cout << &a << endl;  // [location of the integer a in our memory]

  return 0;
}