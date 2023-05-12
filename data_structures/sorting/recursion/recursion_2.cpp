#include <iostream>
using namespace std;

int fibo_seq(int n){

  // the sequence starts with zero and one
  // in the case of 1, just return it, 0 + 1 = 1
  if (n <= 1){
    return n;
    
  } else if (n > 20) {
    cout<<"This program works with n <= 20"<<endl;
    cout<<"Returning -1 as default"<<endl;
    return -1;
    
  } else {

    // call the function on the previous two numbers
    // (n-1)th and (n-2)th numbers
    return fibo_seq(n-1) + fibo_seq(n-2);
  }
}


// testing the implementation
int main(){

  cout<<fibo_seq(3)<<endl;   // 2
  cout<<fibo_seq(4)<<endl;   // 3
  cout<<fibo_seq(19)<<endl;  // 4181
  cout<<fibo_seq(20)<<endl;  // 6765
  cout<<fibo_seq(21)<<endl;  // -1
  cout<<fibo_seq(15)<<endl;  // 610
  
  return 0;
}