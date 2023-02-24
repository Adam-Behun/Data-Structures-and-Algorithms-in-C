#include <iostream>
using namespace std;

int main() {
  int userAge;
  int insurancePrice;

  cout << "Enter your age: ";
  cin >> userAge;

  if (userAge < 16) {
    cout << "Too young." << endl;
    insurancePrice = 0;
  }
  else if (userAge < 25) {
    insurancePrice = 4800;
  }
  else if (userAge < 40) {
    insurancePrice = 2350;
  }
  else {
    insurancePrice = 2100; 
  }

  cout << "Annual price: $" << insurancePrice << endl;
  
  return 0;
}