#include <iostream>
#include <string>
using namespace std;

int main() {
  string firstName;
  string lastName;

  cout << "What is your first name? " << endl;
  cin >> firstName;
  
  cout << "What is your last name? " << endl;
  cin >> lastName;

  cout << lastName << ", " << firstName << endl;
  return 0;
}