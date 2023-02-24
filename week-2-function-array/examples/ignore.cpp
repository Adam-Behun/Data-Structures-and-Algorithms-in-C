#include <iostream>
#include <string>
using namespace std;

int main(){
  
  string movie;
  cout << "What is your favorite movie? ";
  getline(cin, movie);
  cout << "I like " << movie << " too." << endl;

  return 0;
}