#include <iostream>
using namespace std;

int main(){
  double initialSavings;
  double interestRate;
  double currSavings;

  int i;

  cout << "Enter initial savings: ";
  cin >> initialSavings;

  cout << "Enter interest rate: ";
  cin >> interestRate;

  cout << endl << "Annual savings for 10 years: " << endl;

  currSavings = initialSavings;
  for (i = 0; i < 10; ++i){
    cout << "$" << currSavings << endl;
    currSavings = currSavings + (currSavings * interestRate);
  }

  return 0;
}