#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int asleepHours1;
  int asleepHours2;
  int asleepHours3;
  int childrenCount;

  cin >> asleepHours1;
  cin >> asleepHours2;
  cin >> asleepHours3;
  cin >> childrenCount;

  double avgHours;

  avgHours = static_cast<double>(asleepHours1 + asleepHours2 + asleepHours3) / childrenCount;

  cout << fixed << setprecision(2) << avgHours << endl;

  return 0;
}