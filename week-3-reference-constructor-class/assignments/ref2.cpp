#include <iostream>
using namespace std;

// This function takes the array as a variable and not reference
void swap_array(int arr[]){

  // Iterate over half of the array of fixed size 10
  for (int i = 0; i < (10 / 2); ++i){

    // Need a temporary variable if we want to swap values
    int tmp = arr[i];

    // First iteration = index 0 assigned with index 9 value
    // Second it. = index 1 assigned with index 8 value
    arr[i] = arr[10 - 1 - i];

    // Indexes 0, 1, 2, 3, 4 get into the tmp variable one-by-one and then get inserted here at the new index
    arr[10 - 1 - i] = tmp;
    }
  }

int main(){

  // Declare an array of size 10
  int arr[10] = {0};

  // For an index i, insert value i+1, iterate over the array
  for (int i = 0; i < 10; ++i){
    arr[i] = i+1;
  }

  // Print the original array
  cout << "Original array" << endl;
  for (int i = 0; i < 10; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;

  // Function call, passing the entire array as a parameter
  swap_array(arr);

  // Print the swapped array
  cout << "Swapped array" << endl;
  for (int i = 0; i < 10; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}