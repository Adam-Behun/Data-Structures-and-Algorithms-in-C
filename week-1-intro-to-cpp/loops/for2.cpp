#include <iostream>
using namespace std;

int main(){
  int maxSoFar;
  int currValue;
  int numValues;
  int i;

  cin >> numValues;

  for (i = 0; i < numValues; i++){
    cin >> currValue;

    if (i == 0){
      maxSoFar = currValue;
      }
    else if (currValue > maxSoFar) {
      maxSoFar = currValue;
    }
  }
  if (numValues > 0){
    cout << "Max: " << maxSoFar << endl;
  }

  return 0;
}