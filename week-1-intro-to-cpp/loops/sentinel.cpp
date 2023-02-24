#include <iostream>
using namespace std;

int main(){
  int currValue;
  int valuesSum;
  int numValues;

  valuesSum = 0;
  numValues = 0;

  cin >> currValue;

  while (currValue > 0) {
    valuesSum = valuesSum + currValue;
    numValues = numValues + 1;
    cin >> currValue;
  }

  cout << "Average: " << (valuesSum / numValues) << endl;

  return 0;
}