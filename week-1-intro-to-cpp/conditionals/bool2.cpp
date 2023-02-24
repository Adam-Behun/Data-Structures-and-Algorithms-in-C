#include <iostream>
using namespace std;

int main() {
   bool isTeenager;
   int kidAge;

   cin >> kidAge;

   isTeenager = (kidAge >= 13 && kidAge <= 19);

   if (isTeenager) {
      cout << "Teen" << endl;
   }
   else {
      cout << "Not teen" << endl;
   }

   return 0;
}