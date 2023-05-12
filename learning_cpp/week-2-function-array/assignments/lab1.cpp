#include <iostream>
using namespace std;

// Declare a user-defined function
int compare(int size, int []);

// Initialize main
int main(){
  
  //Declare int variables
  int size, i, final_result;

  // Prompt user for size of the array
  cout << "Size of the array: " << endl;
  cin >> size;

  // Initialize an array with the size of int variable size
  int apple[size];

  // Input values from user into the array
  for (i = 0; i < size; ++i){
    cout << "Input: ";
    cin >> apple[i];
    }

  // Pass the array and its size into the function
  final_result = compare(size, apple);

  // Check the result of the compare function and print results
  if (final_result == 'N'){
    cout << 'N' << endl;
  }
  else {
    cout << "Index: " << final_result << ".   Element: " << final_result << endl;
  }
}

// Compare function taking size and the array as parameters
int compare(int size, int apple[]){
  
  // Declare iteration int
  int i;

  // Initialize my return variable as char for the possibility of not meeting the condition apple[i] == i;
  char result = 'N';

  // Iterate over the array and check for apple[i] == i;
  for (i = 0; i <= size; ++i){
      if (apple[i] == i){

        // Changes the default value of char result
        result = i;
        break;
        }
    }

  // If condition met, return number. If condition not met, return default result ('N')
  return result;
}