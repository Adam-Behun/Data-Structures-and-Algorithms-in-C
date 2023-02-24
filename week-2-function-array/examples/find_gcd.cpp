#include <iostream>
#include <cmath>
using namespace std;

int PromptForPositiveNumber(){
  int userNum = 0;

  while (userNum <= 0){
    cout << "Enter a positive number (>0): " << endl;
    cin >> userNum;

    if (userNum <= 0){
      cout << "Invalid number." << endl;
    }
  }

  return userNum;
}

// Function returns greatest common divisor of two inputs

int findGCD(int aVal, int bVal){
  int numA, numB;

  numA = aVal;
  numB = bVal;

  while (numA != numB){
    if (numB > numA){
      numB = numB - numA;
    }
    else {
      numA = numA - numB;
    }
  }

  return numA;
}

// Function returns least common multiple of two inputs

int findLCM(int aVal, int bVal){
  int lcmVal;

  lcmVal = abs(aVal * bVal) / findGCD(aVal, bVal);

  return lcmVal;
}

int main(){
  int usrNumA, usrNumB, lcmResult;

  cout << "Enter value for first input" << endl;
  usrNumA = PromptForPositiveNumber();

  cout << endl << "Enter value for second input" << endl;
  usrNumB = PromptForPositiveNumber();

  cout << endl << "Least common multiple of " << usrNumA << " and " << usrNumB << " is " << lcmResult << endl;

  return 0;
}