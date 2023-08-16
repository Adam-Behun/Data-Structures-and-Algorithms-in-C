#include <iostream>
using namespace std;

class person {
private:

  // person class has id as its private data member
  int id = 5;

public:

  // public *ptr pointing to the address of private id 
  int *ptr = &id;

  // constructor printing value of ptr after inititializing an object of person class
  person() { cout << *ptr; }
};

int main() {

  // initialize an object Alice of person class
  person Alice;

  // declare a pointer ptr
  person *ptr;

  return 0;
}