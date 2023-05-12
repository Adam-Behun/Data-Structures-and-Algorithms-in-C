#include <iostream>
using namespace std;

int main() {
  const int YEARS_PER_GEN = 20;
  int userYear;
  int consYear;
  int numAnc;

  consYear = 2020;
  numAnc =2;

  cout << "Enter a past year" << endl;
  cin >> userYear;

  while (consYear >= userYear) {
    cout << "Ancestors in " << consYear << ":" << numAnc << endl;

    numAnc = 2 * numAnc;
    consYear = consYear - YEARS_PER_GEN;
  }

  return 0;
}