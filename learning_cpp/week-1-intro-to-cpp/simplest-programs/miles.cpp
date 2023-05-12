#include <iostream>
using namespace std;

int main() {
  int totalMinutes;
  int mileTime;
  int numMiles;

  cin >> totalMinutes;
  cin >> mileTime;

  numMiles = totalMinutes / mileTime;

  cout << "Max number of miles: " << numMiles << endl;

  return 0;
}