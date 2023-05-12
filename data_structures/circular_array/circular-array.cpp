#include <iostream>
using namespace std;

// T (any datatype) is the datatype of the elements and max_size is int
template <typename T, int max_size> class Carray {
private:
  T arr[max_size]; // array declaration
  int index_start; // start index
  int index_end;   // end index
  int num_ele;     // number of elements in the array

public:
  // constructor declaration
  Carray(int);

  template <typename T1> void input(T1); // Input data into the array
  void display(); // Display num of elements, first element, last element
                  // Then, display all elements (first to last)
};

/* Please complete the body of all the class functions outside the class */

// templated constructor initialization
template <typename T, int max_size>
Carray<T, max_size>::Carray(int start_index) {

  // set the passed start_index as the start of my array
  index_start = start_index % max_size;

  // first element as next of the last element (Circular array)
  index_end = (start_index - 1) % max_size;

  // at construction, num of elements is 0
  num_ele = 0;
}

// template param T for the class Carray, and int max_size
template <typename T, int max_size>

// template param T1 (can be different from the class param types) as we input a
// variety of data types
template <typename T1>
void Carray<T, max_size>::input(T1 input_data) {

  // num_ele tracks how many elems we have
  // max_size is defined at construction
  if (num_ele == max_size) {
    cout << "Full array" << endl;

    // if not full
  } else {
    // assign input_data to the end of the array
    arr[index_start] = input_data;

    // increase num_ele as we have inserted an ele
    num_ele++;

    // wrap around the end of the circular array
    index_start = (index_start + 1) % max_size;
  }
}

// printing the elements of the array
template <typename T, int max_size> void Carray<T, max_size>::display() {
  cout << "Number of elements: " << num_ele << endl;

  // check for empty array
  if (num_ele == 0) {
    cout << "Empty array." << endl;
  }

  // print first and last element of the array
  cout << "The first element: " << arr[index_start] << endl;
  cout << "The last element: " << arr[index_end] << endl;

  // printing all elements "first to last"
  cout << "All the elements in Circular Array: " << endl;
  int j = 0;
  while (j < num_ele) {

    // calculate where the array starts and print all eles
    cout << arr[index_start++ % max_size] << " ";

    // increment the iterator variable
    j++;
  }
  cout << endl;
}

int main() { // An example of the test main function.
  Carray<int, 5> arr_1(3); // The size of an int array is 5, the start index is 2.
  for (int i = 0; i < 5; i++) { // Input 5 int elements into the array
    arr_1.input(i);
  }
  arr_1.display(); // Display.
  cout << endl;

  Carray<double, 6> arr_2(16); // The size of a double array is 6, the start index is 16. For a
           // circular array, the start index is 16%6 = 4.
  for (int i = 0; i < 10; i++) { // Input 10 double elements into the array.
    arr_2.input(i + 0.01);
  }
  arr_2.display(); // Display.
  cout << endl;

  Carray<float, 2> arr_3(1); // The size of a float array is 3, the start index is 1.
  for (int i = 0; i < 2; i++) { // Input 2 float elements into the array
    arr_3.input(i + 0.3);
  }
  arr_3.display(); // Display.

  return 0;
}