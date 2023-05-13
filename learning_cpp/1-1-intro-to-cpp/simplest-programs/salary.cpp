#include <iostream>
using namespace std;

int main() {
  int salaryPerYear;
  int daysPerYear;
  int salaryPerDay;

  cout << "Enter yearly salary: ";
  cin >> salaryPerYear;

  cout << "Enter days worked per year: ";
  cin >> daysPerYear;

  salaryPerDay = salaryPerYear / daysPerYear; 

  cout << "Salary per day is " << salaryPerDay << endl;

  return 0;
}