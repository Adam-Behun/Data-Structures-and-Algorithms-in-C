#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue<int, list<int> > p; // this is an undeclared identifier = using list as an underlying container is not allowed

  p.push(1);
  p.push(2);
  p.push(3);

  while(!p.empty()){
    cout<<p.top()<<" ";
    p.pop();
  }
  cout<<endl;

  return 0;
}