#include <iostream>
using namespace std;

int main() {

  int a = 10;
  cout << "a is 10 -> " << a << endl; // print out a

  int *a_ptr = &a; // initiliaze a_ptr to point to the address of the variable a

  *a_ptr = 20; // change the value of variable at the location that a_ptr points to

  cout << "a is 20 -> " << a << endl; // print a -- it is changed to 20

  cout << &a << endl; // print the location of a

  cout << a_ptr << endl; // print the value of a_ptr value = same as &a

  return 0;
}