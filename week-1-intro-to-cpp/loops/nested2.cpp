#include <iostream>
using namespace std;

int main(){
  int firstRange;
  int secondRange;
  int count;
  int i;
  int j;

  cin >> firstRange;
  cin >> secondRange;

  count = 0;

  for (i = 0; i < firstRange; ++i)
    {
      for (j = 0; j <= secondRange; ++j)
        {
          ++count;
        }
    }

  cout << "Inner loop ran " << count << " times." << endl;

  return 0;
}