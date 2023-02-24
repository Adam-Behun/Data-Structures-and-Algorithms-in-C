// I dont understand how this for loop counts.

// What is the output of this program?


#include <iostream>
using namespace std;

int main() {
   int result;
   int n;

   result = 0;

   for (n = 0; n < 6; ++n) {
      result = n + 3;
      if ((result % 2) != 0) {
         cout << "_";
         continue;
      }
      cout << result;
   }
   cout << endl;

   return 0;
}