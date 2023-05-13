#include <iostream>
using namespace std;

double CalcPyramidVolume(double baseLength, double baseWidth, double pyramidHeight){
  double area = baseLength * baseWidth;
  double volume = area * pyramidHeight * 1/3;

  return volume;
}

int main(){
  double userLength, userWidth, userHeight;

  cin >> userLength >> userWidth >> userHeight;

  cout << "Volume: " << CalcPyramidVolume(userLength, userWidth, userHeight) << endl;

  return 0;
}