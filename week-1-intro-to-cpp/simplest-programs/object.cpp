#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double objectMass;
  double objectVelocity;
  double objectMomentum;

  cin >> objectMass;
  cin >> objectVelocity;

  objectMomentum = objectMass * objectVelocity;

  cout << "Object momentum is " << fixed << setprecision(4) << objectMomentum << endl;

  return 0;
}