// Optimization of the recursive algo from question 1
// Idea: check result against the result of the library pow(n, x) function
// Time complexity is still O(n) as the program might have to call the function n times
// But the space complexity is now O(1) because is stores the result variable
// The first (not-improved) recursion was worse because it pushed new and new stack frames onto the old ones until it reaches the base case and that is an expensive operation

#include <iostream>
#include <cmath> // for the pow(x,n) function
using namespace std;

int power(int x, int n);

// checking implementation
int main(){
  cout<<power(3,2)<<endl;
  cout<<power(3,3)<<endl;
  cout<<power(3,8)<<endl;
  cout<<power(3,10)<<endl;
  cout<<power(3,12)<<endl;
  cout<<power(3,15)<<endl; 
  cout<<power(0,3)<<endl;

  return 0;
}


// pass the two numbers
int power(int x, int n){

  int result = -1;
  if (n == 0){
    return 1;
  } else {

    // check result against the library implemented function
    // pow function from <cmath> is
        // O(log n) for time
        // O(1) for space
    while (pow(x, n) != result){

      // if results don't match, go further in the while loop
      return x * power(x, n-1);  
    }
    return result;
  }
}