#include <iostream>
using namespace std;

int main() {
  char bodyChar;
  char headChar;
  
  cout << "Type two characters: ";
  cin >> bodyChar;
  cin >> headChar;

  cout << bodyChar << bodyChar << bodyChar;
  cout << headChar << endl;
}