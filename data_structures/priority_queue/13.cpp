#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue<int> p;

  p.emplace(1);
  p.emplace(2);
  p.emplace(3);

  cout<<&p<<endl;
  while(!p.empty()){
    cout<<&p.top()<<": "<<p.top()<<endl;
    p.pop();
  }

  return 0;
}