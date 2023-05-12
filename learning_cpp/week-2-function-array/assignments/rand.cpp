#include <iostream>
#include <string>
using namespace std;

int main() {
  int lowestValue = 1;
  int highestValue = 100;
  bool found = false;
  int numOfGuess = 0;

  cout << "Pick a number from 1 to 100 and let me guess it" << endl;

  string YorN;
  string HorL;
  while (!found) {
    int guess = (lowestValue + highestValue) / 2;
    cout << "Is it " << guess << " ?" << endl;
    cout << "Input Yes or No" << endl;
    cin >> YorN;
    numOfGuess++;

    if (YorN == "Yes") {
      cout << "I found it in " << numOfGuess << " guesses." << endl;
      found = true;
    }
    else if (YorN == "No") {
      cout << "Is it too high or too low?" << endl;
      cout << "High or Low" << endl;
      cin >> HorL;
      if (HorL == "High") {
        highestValue = guess + 1;
      } else if (HorL == "Low") {
        lowestValue = guess - 1;
      } else {
        cout << "Wrong input" << endl;
        continue;
      }
    } else {
      cout << "Wrong input" << endl;
      continue;
    }
  }
  return 0;
}