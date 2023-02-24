/*Assign variable minimumVal with the lowest value of 7 positive integers read from input.

Ex: If the input is 20 100 45 20 85 65 70, then the output is:

20
Note: The first value read is the lowest value seen so far.


Is this the right solution? Is line 25 how I was supposed to initialize minimumVal for the first iteration?

*/


#include <iostream>
using namespace std;

int main() {
   int inputVal;
   int minimumVal;
   int i;

   for (i = 0; i < 7; i++)
   {
      cin >> inputVal;
      
      if (i==0){
         minimumVal = inputVal;
      }
      
      if (inputVal < minimumVal)
      {
         minimumVal = inputVal;
      }    
   }
   
   cout << minimumVal << endl;

   return 0;
}