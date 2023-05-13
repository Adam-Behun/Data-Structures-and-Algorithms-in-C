#include <iostream>
using namespace std;

int Compute(int val1, int val2) {
   int result = 1;
   int i;

   for (i = 0; i < val1; ++i) {
      result *= val2 + 2;
   }
   
   return result;
}

int main() {
   int value1 = 3;
   int value2 = 4;
   int computedValue;

   computedValue = Compute(value1, value2);
   cout << computedValue << endl;
   
   return 0;
}