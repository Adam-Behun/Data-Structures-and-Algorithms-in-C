#include <iostream>
using namespace std;

int main(){
  int currValue;
  int valuesSum;
  int numValues;
  int i;

  cin >> numValues;

  valuesSum = 0;

  for (i = 0; i < numValues; ++i){
    cin >> currValue;
    valuesSum += currValue;
  }

  cout << "Average: " << (valuesSum / numValues) << endl;

  return 0;
}