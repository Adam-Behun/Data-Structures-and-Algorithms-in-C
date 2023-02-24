#include <iostream>
using namespace std;

int main() {
  int userMinutes;
  int outHours;
  int outMinutes;

  cout << "Enter minutes: ";
  cin >> userMinutes;

  outHours = userMinutes / 60;
  outMinutes = userMinutes % 60;

  cout << userMinutes << " minutes is ";
  cout << outHours << " hours and ";
  cout << outMinutes << " minutes." << endl;

  return 0;
}