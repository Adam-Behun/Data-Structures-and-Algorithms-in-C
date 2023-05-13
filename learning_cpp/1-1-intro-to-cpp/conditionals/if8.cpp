#include <iostream>
using namespace std;

int main() {
  int partCount;
  int requiredGroups;
  int remainingGroups;

  cin >> partCount;
  cin >> requiredGroups;
  cin >> remainingGroups;

  if (partCount >= 18) {
    requiredGroups -= 5;
  }
  else {
    remainingGroups -= 3;
  }

  cout << requiredGroups << endl;
  cout << remainingGroups << endl;

  return 0;
}