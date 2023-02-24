#include <iostream>
using namespace std;

int main() {
  int myFirstVar;    // Alligned comments yield less
  int yetAnotherVar; // visual clutter
  int thirdVar;

  // Above blank line separates variable declarations from the rest
  cout << "Enter a number: ";
  cin >> myFirstVar;

  // Above blank line separates user input statements from the rest
  yetAnotherVar = myFirstVar;    // Aligned = operators
  thirdVar = yetAnotherVar + 1;
  // Also notice the single-space on left and right of + and =
  // (except when aligning the second = with the first = )

  cout << "Final value is " << thirdVar << endl;   // Single-space on each side of <<

  return 0;   // The above blank line separates the return from the rest
}