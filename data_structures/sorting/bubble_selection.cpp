#include <iostream>
using namespace std;

// forward function declarations
template <typename T> void selection_sort(T arr[], int size);
template <typename T> void bubble_sort(T arr[], int size);
template <typename T> void swap(T *first, T *second);
template <typename T> void display(T arr[], int size);

// Driver function
int main() {

  // initializing arrays to check selection_sort
  int size = 5;
  int s_arr_int[5] = {5, 1, 2, 3, 2};
  double s_double_arr[5] = {2.3, 4.0, 1.2, 3.1, 1.1};
  float s_float_arr[5] = {2.3, 4.0, 1.2, 3.1, 1.1};
  long s_long_arr[5] = {5, 1, 2, 3, 2};

  // initializing arrays to check bubble_sort
  int b_arr_int[5] = {56, 44, 2, 1, 12};
  double b_double_arr[5] = {2.6, 44.0, 1.2, 15.1, 19.1};
  float b_float_arr[5] = {2.3, 4.0, 1.2, 3.1, 1.1};
  long b_long_arr[5] = {56, 44, 2, 1, 12};

  // checking all functionality

  cout << "Checking the selection sort implementation" << endl << endl;
  // checking the integer array
  cout << "Unsorted integer array" << endl;
  display(s_arr_int, size);
  cout << endl;
  selection_sort(s_arr_int, size);
  cout << "Sorted integer array" << endl;
  display(s_arr_int, size);
  cout << endl;
  cout << "-------------" << endl;

  // cheching the double array
  cout << "Unsorted double array" << endl;
  display(s_double_arr, size);
  cout << endl;
  selection_sort(s_double_arr, size);
  cout << "Sorted double array" << endl;
  display(s_double_arr, size);
  cout << endl;
  cout << "-------------" << endl;

  // cheching the float array
  cout << "Unsorted float array" << endl;
  display(s_float_arr, size);
  cout << endl;
  selection_sort(s_float_arr, size);
  cout << "Sorted float array" << endl;
  display(s_float_arr, size);
  cout << endl;
  cout << "-------------" << endl << endl;

  cout << "Checking the bubble sort implementation" << endl << endl;
  
  // checking the integer array
  cout << "Unsorted integer array" << endl;
  display(b_arr_int, size);
  cout << endl;
  bubble_sort(b_arr_int, size);
  cout << "Sorted integer array" << endl;
  display(b_arr_int, size);
  cout << endl;
  cout << "-------------" << endl;

  // cheching the double array
  cout << "Unsorted double array" << endl;
  display(b_double_arr, size);
  cout << endl;
  bubble_sort(b_double_arr, size);
  cout << "Sorted double array" << endl;
  display(b_double_arr, size);
  cout << endl;
  cout << "-------------" << endl;

  // cheching the float array
  cout << "Unsorted float array" << endl;
  display(b_float_arr, size);
  cout << endl;
  bubble_sort(b_float_arr, size);
  cout << "Sorted float array" << endl;
  display(b_float_arr, size);
  cout << endl;
  cout << "-------------" << endl << endl;
}

// function used to swap values
template <typename T> void swap(T *first, T *second) {
  T temp = *first;
  *first = *second;
  *second = temp;
};

// selection sort takes in a T datatype array and an int size
template <typename T> void selection_sort(T arr[], int size) {
  int i, j, min;

  // from first to last element
  for (i = 0; i < size -1; i++) {
    min = i; // assign current element to min

    // from second element to last
    for (j = i + 1; j < size; j++) {

      // checks next against current
      if (arr[j] < arr[min]) {

        // if pass, swap
        min = j;
      }
    }

    // check if min ele from inner loop the same as outer loop current ele
    if (min != i) {

      // if pass, swap
      swap(&arr[i], &arr[min]);
    }
  }
};

// function used to print the arrays
template <typename T> void display(T arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
};

template <typename T> void bubble_sort(T arr[], int size) {
  int i, j;

  // iterate from first to second-to-last
  for (i = 0; i < size - 1; i++) {

    // iterate from first to last
    for (j = 0; j < size - i - 1; j++) {

      // compare adjacent
      if (arr[j] > arr[j + 1]) {

        // if pass, then swap adjacent
        // and go inner loop again
        swap(arr + j, arr + j + 1);
      }
    }
  }
};