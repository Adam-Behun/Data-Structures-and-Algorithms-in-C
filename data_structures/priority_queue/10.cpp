#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue<int> p;

  p.push(1);
  p.push(2);
  p.push(3);

  while (!p.empty()){
    cout<<p.top()<<" ";
    p.pop();
  }
  cout<<endl;

  return 0;
}