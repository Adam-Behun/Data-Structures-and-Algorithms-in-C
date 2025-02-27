#include <iostream>
using namespace std;

int main(){

  // Declaring an array of size 10 and type int
  int values[10];
  int i;

  // Prompt user for 10 random integers
  cout << "Please input 10 random int numbers [0, 3] :" << endl;

  // Iterate over the array and insert values
  for (i = 0; i < 10; ++i){
    cin >> values[i];
  }

  // Initialize counters for different values, imagine them as buckets
  int countZero = 0;
  int countOne = 0;
  int countTwo = 0;
  int countThree = 0;

  // Check condition and update the appropriate counter / insert into bucket
  for (i = 0; i < 10; ++i){
    if (values[i] == 0){
      countZero += 1;
    }
    else if (values[i] == 1){
      countOne += 1;
    }
    else if (values[i] == 2){
      countTwo += 1;
    }
    else {
      countThree += 1;
    }
}
  
  // Initialize max_count  
  int max_count = 1;

  // Check for the highest count / fullest bucket and update max_count
  if (countZero > countOne && countZero > countTwo && countZero > countThree){
    max_count = 0;
  }
  else if (countOne > countZero && countOne > countTwo && countOne > countThree){
    max_count = 1;
  }
  else if (countTwo > countZero && countTwo > countOne && countTwo > countThree){
    max_count = 2;
  }
  else {
    max_count = 3;
  }

  // Print result
  cout << "The most frequent number is: " << max_count << endl;

  // Print for check
  cout << "Count zero " << countZero << endl;
  cout << "Count one " << countOne << endl;
  cout << "Count two " << countTwo << endl;
  cout << "Count three " << countThree << endl; 

  return 0;
}