#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

// Guess a computer's number

int main() {
  int randomNum;

  srand(time(NULL));
  randomNum = rand()%100 + 1;

  cout << randomNum << endl;

  return 0;
}