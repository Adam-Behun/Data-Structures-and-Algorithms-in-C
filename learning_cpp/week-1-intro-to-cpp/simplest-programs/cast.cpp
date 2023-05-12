#include <iostream>
using namespace std;

int main() {
  int kidsInFamily1;
  int kidsInFamily2;
  int numFamilies;

  double avgKidsPerFamily;

  kidsInFamily1 = 3;
  kidsInFamily2 = 4;
  numFamilies = 2;

  avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2) / static_cast<double>(numFamilies);

  cout << "Average kids per familyL " << avgKidsPerFamily << endl;

  return 0;
}