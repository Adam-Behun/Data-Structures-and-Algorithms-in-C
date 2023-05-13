#include <iostream>
#include <vector>
using namespace std;

int main(){
  const int NUM_VALS = 8;
  vector<int> userVals(NUM_VALS);
  unsigned int i;

  cout << "Enter: " << NUM_VALS << " integer values" << endl;
  for (i = 0; i < userVals.size(); ++i){
    cout << "Value: ";
    cin >> userVals.at(i);
  }
  cout << "You entered: ";
  for (i = 0; i < userVals.size(); ++i){
    cout << userVals.at(i) << " ";
  }
  cout << endl;

  return 0;
}