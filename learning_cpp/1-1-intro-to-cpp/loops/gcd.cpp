#include <iostream>
using namespace std;

int main() {
  int numA;
  int numB;

  cout << "Enter positive integer: ";
  cin >> numA;

  cout << "Enter second positive integer: ";
  cin >> numB;

  while (numA != numB) {
    if (numB > numA) {
      numB = numB - numA;
    }
    else {
      numA =  numA - numB;
    }
  }

  cout << "GCD is: " << numA << endl;

  return 0;
}