#include <iostream>
using namespace std;

int main() {
  char arrowBody;
  char arrowHead;

  arrowBody = '-';
  arrowHead = '>';

  cout << arrowBody << arrowBody << arrowBody << arrowHead << endl;

  arrowBody = 'o';

  cout << arrowBody << arrowBody << arrowBody << arrowHead << endl;

  return 0;
}