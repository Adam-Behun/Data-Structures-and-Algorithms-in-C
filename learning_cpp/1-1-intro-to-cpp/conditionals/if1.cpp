#include <iostream>
using namespace std;

int main() {
  int hotelRate;
  int numYears;

  hotelRate = 150;

  cout << "Enter numberof years married: ";
  cin >> numYears;

  if (numYears == 50) {
    cout << "Congratulations on 50 years " << "of marriage!" << endl;

    hotelRate = hotelRate / 2;
  }

  cout << "Your hotel rate: ";
  cout << hotelRate << endl;

  return 0;
}