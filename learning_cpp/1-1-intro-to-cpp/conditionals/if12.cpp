#include <iostream>
using namespace std;

int main() {
  int val;

  cout << "Give me the years" << endl;
  cin >> val;

  if ((val > 400) && (val <= 500)) {
    cout << "The 5th century" << endl;
  }
  else if ((val > 500) && (val <= 600)) {
    cout << "The 6th century" << endl;
  } 
  else if ((val > 600) && (val <= 700)) {
    cout << "The 7th century" << endl;
  }
  else {
    cout << "Not in the period of research" << endl;
  }

  return 0;  
}