#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
   
   float lengthInches;
   float lengthYards;
   
   cin >> lengthInches;
   
   lengthYards = lengthInches / 36;
   
   cout << fixed << setprecision(3) << lengthYards << " yards" << endl;

   return 0;
}