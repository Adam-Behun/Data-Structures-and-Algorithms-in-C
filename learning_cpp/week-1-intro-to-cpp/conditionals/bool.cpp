#include <iostream>
using namespace std;

int main() {
  int waitTime;
  int partySize;
  char day;
  bool isLargeParty;
  bool isWeekend;

  cout << "Day of reservation (T/W/R/F/S/U): ";
  cin >> day;
  if ((day == 'F') || (day == 'S') || (day == 'U')) {
    isWeekend = true;
  }
  else {
    isWeekend = false;
  }

  cout << "Party size: ";
  cin >> partySize;
  isLargeParty = (partySize > 6);

  if (isWeekend && !isLargeParty) {
    waitTime = 30;
  }
  else if (!isWeekend && !isLargeParty) {
    waitTime = 10;
  }
  else if (isWeekend && isLargeParty) {
    waitTime = 45;
  }
  else {
    waitTime = 15;
  }

  cout << "Restaurant wait time is " << waitTime << " minutes." << endl;
  
  return 0;  
}