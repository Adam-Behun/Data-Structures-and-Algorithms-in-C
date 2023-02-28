#include <iostream>
using namespace std;

class student { /* You should not change this class */
private:
  int id = 5;
  int score = 100;
};

int main() {
  // object Alice, class student
  student Alice;

  // declare a pointer to an int 
  int *ptr;

  // point to an integer value at the Alice's address
  // this only points to ints that are a part of the object Alice
  ptr = (int *)&Alice;

  /* You should not declare any additional variables/functions/objects in the
   * main function */

  // print the value ptr points to (5)
  cout << *ptr << endl;   // The output should be 5.

  // move pointer to the next int within the object Alice
  cout << *++ptr << endl; // The output should be 100.

  return 0;
}