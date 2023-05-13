#include <iostream>
using namespace std;

int main() {
  
   // Declaring float variables meters and inches
   float meters;
   float inches;
   
   // Asking for the value in meters
   cout << "Meters: ";

   // Saving user's input into the variable meters
   cin >> meters;

   // Doing conversion from meters to inches, saving the result into variable inches 
   inches = meters * 39.37;

   // Printing out the final result
   cout << "Your input is: " << meters << "." << " The answer is: " << inches << " inches." << endl;
  
   return 0;
}