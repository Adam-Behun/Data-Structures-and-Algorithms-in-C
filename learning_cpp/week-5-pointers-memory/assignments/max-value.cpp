#include <iostream>
using namespace std;

// takes in a pointer, and an int, returns a double
double max(double*, int);

int main() {

  // initialize an array of doubles
  double arr[5] = {10, 1, 100, 20, 3};
  double _max;

  // assign _max with the return of max function
  // pass "arr" and "5" == arr points to arr[0][0] 
  _max = max(arr, 5);

  cout << _max << endl;
  return 0;
}

// initialize max, takes a pointer to a double, and an int size 
double max(double* p, int size){
  double _maxValue = 0;

  // iterate over the array until size is reached (5 times)
  for (int i = 0; i < size; i++) {

    // check condition (if the item p points to >= _maxValue)
    if (*p >= _maxValue) {

      // assign _maxValue with the item that passed the condition above
      _maxValue = *p;
    }

    // move pointer one item right, still in the for loop
    p++;
  }
  return _maxValue;
}