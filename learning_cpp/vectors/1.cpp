#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> test(5);

  // end returns pointer that points to the element after the last element
  cout<<"The size of the vector: "<<test.end() - test.begin()<<endl;

  for (int i=0; i<test.size(); i++){
    test[i] = i;
  }
  test.at(4) = 100;

  for (int i=0; i<test.size(); i++){
    cout<<test[i]<<" ";
  }
  cout<<endl;

  for (int i=0; i<test.size(); i++){
    cout<<test.at(i)<<" ";
  }
  cout<<endl;

  return 0;
}