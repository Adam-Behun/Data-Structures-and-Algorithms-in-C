#include <iostream>
using namespace std;

int main() {
  int userAge;

  cin >> userAge;

  if (userAge <= 19) {
    cout << "I am a teenager" << endl;
  }
  else {
    cout << "I am an adult" << endl;
  }
  return 0;
}