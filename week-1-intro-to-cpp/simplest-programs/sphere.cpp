#include <iostream>
using namespace std;

int main() {
  double sphereVolume;
  double sphereRadius;

  cin >> sphereRadius;

  sphereVolume = (4.0 / 3.0) * M_PI * sphereRadius * sphereRadius * sphereRadius;

  cout << fixed << setprecision(2) << sphereVolume << endl;

  return 0;
}