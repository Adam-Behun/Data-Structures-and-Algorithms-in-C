#include <iostream>
using namespace std;

int main() {
  int arr[3] = {0};

  cout<<arr<<endl;
  cout<<&arr[0]<<endl; // it is not an index, it is an address
  cout<<&arr[1]<<endl;

  return 0;
}

// name of the array is the address of the first element of the array that is why they have the same address
// 