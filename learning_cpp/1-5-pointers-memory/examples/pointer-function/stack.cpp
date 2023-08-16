// why is it not printing 10 and 10

#include <iostream>
using namespace std;

int main(){

  // stack 
  
  int b = 10;
  int a = 1;

  // 
  int *p1 = &a;
  int *p2 = &b;

  // move pointer and because it's at stack, it should move to 10
  p1--;

  // 
  cout<<*p1<<endl;
  cout<<*p2<<endl;

  return 0;
}