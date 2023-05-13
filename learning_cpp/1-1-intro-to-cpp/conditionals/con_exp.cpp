#include <iostream>
using namespace std;

int main() {
  string condStr;
  int userVal;

  cin >> userVal;

  condStr = (userVal < 0) ? "negative" : "non-negative";

  cout << userVal << " is " << condStr << "." << endl;

   return 0;  
}