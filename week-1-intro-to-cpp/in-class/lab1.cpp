#include <iostream>
#include <string>
using namespace std;

int main() {
  
  // declaring a variable name
  string name;

  // printing out the question
  cout << "What is your name? ";
  
  // saving the user's input to the variable name
  cin >> name;
  
  // printing out the message, the user's input, and new line
  cout << "Hello " << name << "!" << endl;

  return 0;  
}