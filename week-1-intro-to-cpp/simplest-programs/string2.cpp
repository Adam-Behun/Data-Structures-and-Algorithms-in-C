#include <iostream>
#include <string>

using namespace std;

int main() {
  string wordRelative;
  string wordFood;
  string wordAdjective;
  string wordTimePeriod;

  cout << "Type input without spaces." << endl;

  cout << "Enter a kind of relative: " << endl;
  cin >> wordRelative;

  cout << "Enter a kind of food: " << endl;
  cin >> wordFood;

  cout << "Enter an adjective: " << endl;
  cin >> wordAdjective;

  cout << "Enter a time period: " << endl;
  cin >> wordTimePeriod;

  cout << endl;
  cout << "My " << wordRelative << " says eating " << wordFood << endl;
  cout << "Will make me more " << wordAdjective << "," << endl;
  cout << "so now I eat it very " << wordTimePeriod << "." << endl;

  return 0;
}