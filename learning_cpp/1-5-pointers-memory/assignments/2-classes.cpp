#include <iostream>
using namespace std;

class person {
private:
  int id = 5;

public:
  // return pointer's value = value of private data member "id"
  int accessId() {

    // declare a pointer to an int variable
    int *ptr;

    // point to the address of private data member "id"
    ptr = &id;

    // return value of id, dereferenced ptr  
    return *ptr;
  }
};

class student {
private:
  string name;

  // create an object a of class person
  person a;

public:

  // returns the id of a
  int getPersonId(){

    // a is an object of person, access_Id is its public method returning id
    return a.accessId();
  }

};

int main() {

  // initialize a student object Alice
  student Alice;

  // initialize a student pointer to the address of Alice
  student *ptr = &Alice;

  // call student's class public method getPersonId using a pointer to Alice
  // getPersonId then calls accessID and returns the id
  cout << ptr->getPersonId()<< endl; // The output should be 5.

  return 0;
}