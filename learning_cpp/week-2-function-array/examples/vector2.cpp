#include <iostream>
#include <vector>
using namespace std;

int main(){
  const int NUM_VALS = 8;
  vector<int> userVals(NUM_VALS);
  unsigned int i;
  int maxVal;

  cout << "Enter: " << NUM_VALS << " integer values..." << endl;
  for (i = 0; i < userVals.size(); ++i){
    cout << "Value: ";
    cin >> userVals.at(i);
  }

  maxVal = userVals.at(0);
  for (i = 0; i < userVals.size(); ++i){
    if (userVals.at(i) > maxVal) {
      maxVal = userVals.at(i);
    }
  }
  cout << "Max: " << maxVal << endl;

  return 0;
}