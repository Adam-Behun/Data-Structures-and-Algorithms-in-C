#include <iostream>
using namespace std;

int main() {
  int sideA;
  int sideB;
  int sideC;
  int triPerimeter;

  cin >> sideA;
  cin >> sideB;
  cin >> sideC;

  triPerimeter = sideA + sideB + sideC;

  cout << "The perimeter is " << triPerimeter << endl;

  return 0;
}