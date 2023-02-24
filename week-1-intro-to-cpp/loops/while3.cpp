#include <iostream>
#include <string>
using namespace std;

int main() {
  int randNum0_3;
  string userText;

  cout << "Tell me something about yourself." << endl;
  cout << "You can type \"Goodbye\" at anytime to quit." << endl << endl << "> ";

  getline(cin, userText);

  while (userText != "Goodbye") {
    randNum0_3 = userText.size() % 4; // random num.%4 ensures 0-3

    if (randNum0_3 == 0) {
      cout << endl << "Please explain further." << endl << endl << "> ";
    } 
    else if (randNum0_3 == 1) {
      cout << endl << "Why do you say: \"" << userText << "\"?" << endl << endl << "> ";
    }
    else if (randNum0_3 == 2) {
      cout << "I don't think that's right." << endl << endl << "> ";
    }
    else if (randNum0_3 == 3) {
      cout << endl << "Uh-oh, something went wrong. Try again." << endl << endl;
    }

    getline(cin, userText);
    }
  cout << endl << "It was nice talking with you. Goodbye" << endl;
  return 0;
}