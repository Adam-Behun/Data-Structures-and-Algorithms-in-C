#include <iostream>
using namespace std;

int main(){
  int loopValue;
  int i;
  int j;

  cin >> loopValue;

  for (i = 1; i <= loopValue; ++i)
    {
      cout << i;
      for (j = 0; j < i; ++j)
        {
          cout << "+";
        }
      cout << endl;
    }
  return 0;
}