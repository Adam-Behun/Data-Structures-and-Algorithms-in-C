#include <iostream>
using namespace std;

/* Computer a total cost of leasing a car given the down payment,
  monthly rate, and number of months.
*/

int main() {
  int downPayment;
  int paymentPerMonth;
  int numMonths;
  int totalCost; // Computed total cost to be outputed

  cout << "Enter down payment: ";
  cin >> downPayment;

  cout << "Enter monthly payment: ";
  cin >> paymentPerMonth;

  cout << "Enter number of months: ";
  cin >> numMonths;

  totalCost = downPayment + paymentPerMonth * numMonths;

  cout << "Total cost is " << totalCost << endl;

  return 0;
}