#include <iostream>
using namespace std;

// pass the two numbers from user
int power(int x, int n){
  
  // anything ^0 is 1
  if (n == 0){
    return 1;
  } else {

    // call power with decremented exponent, recursively
    return x * power(x, n-1);
  }
}

int main(){
  cout<<power(3,0)<<endl; // 1
  cout<<power(3,1)<<endl; // 3
  cout<<power(3,2)<<endl; // 9
  cout<<power(3,3)<<endl; // 27
  cout<<power(3,4)<<endl; // 81
  cout<<power(3,5)<<endl; // 243

  cout<<power(0,3)<<endl; // 0

  return 0;
}