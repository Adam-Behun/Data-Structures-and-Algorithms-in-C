#include <iostream>
using namespace std;

double HeightFeetToCm(int heightFt, int heightIn){
  const double CM_PER_IN = 2.54;
  const int IN_PER_FT = 12;

  int totIn;
  double cmVal;

  totIn = (heightFt * IN_PER_FT) + heightIn;
  cmVal = totIn * CM_PER_IN;

  return cmVal;
}

int main(){
  int userFt, userIn;

  cout << "Enter feet: ";
  cin >> userFt;

  cout << "Enter inches: ";
  cin >> userIn;

  cout << "Centimeters: ";
  cout << HeightFeetToCm(userFt, userIn) << endl;

  return 0;
}