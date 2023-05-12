#include <iostream>
using namespace std;

// I am using the same main function as for bubble and selection sort from yday
// only the algorithm is different

// forward function declarations
template <typename T> void insertion_sort(T arr[], int size);
template <typename T> void swap(T *first, T *second);
template <typename T> void display(T arr[], int size);

// Driver function
int main() {

  // initializing arrays to check selection_sort
  int size = 5;
  int arr_int[5] = {5, 1, 2, 3, 2};
  double double_arr[5] = {2.3, 4.0, 1.2, 3.1, 1.1};
  float float_arr[5] = {2.3, 4.0, 1.2, 3.1, 1.1};
  long long_arr[5] = {5, 1, 2, 3, 2};

  // checking all functionality

  cout << "Checking the insertion sort implementation" << endl << endl;
  // checking the integer array
  cout << "Unsorted integer array" << endl;
  display(arr_int, size);
  cout << endl;
  insertion_sort(arr_int, size);
  cout << "Sorted integer array" << endl;
  display(arr_int, size);
  cout << endl;
  cout << "-------------" << endl;

  // cheching the double array
  cout << "Unsorted double array" << endl;
  display(double_arr, size);
  cout << endl;
  insertion_sort(double_arr, size);
  cout << "Sorted double array" << endl;
  display(double_arr, size);
  cout << endl;
  cout << "-------------" << endl;

  // cheching the float array
  cout << "Unsorted float array" << endl;
  display(double_arr, size);
  cout << endl;
  insertion_sort(double_arr, size);
  cout << "Sorted float array" << endl;
  display(double_arr, size);
  cout << endl;
  cout << "-------------" << endl << endl;
}

// function used to swap values
template <typename T> void swap(T *first, T *second) {
  T temp = *first;
  *first = *second;
  *second = temp;
};

// insertion sort takes in a T datatype array and an int size
template <typename T> void insertion_sort(T arr[], int size) {

  // outer loop starts at the second element
  for (int i=1; i<size; i++){

    // both vars are at the second element with the first iteration
    int j = i;

    // j > 0 stops the program from swapping eles when 0-index ele is the smallest
    // compare previous against current 
    while (j > 0 && arr[j-1] > arr[j]){

      // if previous > current, swap them
      swap(arr[j], arr[j-1]);

      // in the inner loop, move j one step back
      // goes back to while loop
      j = j - 1;
    }
  }
}

// function used to print the arrays
template <typename T> void display(T arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
};