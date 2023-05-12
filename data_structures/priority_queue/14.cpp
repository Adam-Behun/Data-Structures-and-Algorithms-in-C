#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue<int> p;
  
  cout<<p.top()<<endl; // priority_queue is not initialized and so top() throws an error

  return 0;
}