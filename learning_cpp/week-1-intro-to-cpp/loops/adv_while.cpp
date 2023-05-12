#include <iostream>
using namespace std;

int main() {
   int currentValue;
   int previousValue;
   
   cin >> previousValue >> currentValue;
   
   while (currentValue > previousValue) {
      cout << previousValue << " is in a strictly increasing sequence." << endl;
      previousValue = currentValue;
      cin >> currentValue;
      
   }
   
   cout << previousValue << " is in a strictly increasing sequence." << endl;
   cout << currentValue << " breaks the sequence." << endl;

   return 0;
}