#include <iostream>
using namespace std;

int main(){
  int a[2][3] = {0};
  /* You should not declare any additional variables */

  // size of the whole array (2*3) divided by the size of a row (3)
  cout<<sizeof(a)/sizeof(a[0])<<endl;     // The output should be 2. 

  return 0;
}