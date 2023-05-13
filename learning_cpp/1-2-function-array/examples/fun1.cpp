#include <iostream>
using namespace std;

double GetMinutesAsHours(double origMinutes){
  double hours;

  hours = origMinutes / 60;

  return hours;
}

int main(){
  double minutes;
  cin >> minutes;

  cout << GetMinutesAsHours(minutes); 

  return 0;
}