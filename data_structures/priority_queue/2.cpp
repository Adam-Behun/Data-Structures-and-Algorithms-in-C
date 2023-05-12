#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue<int> p;

  p.push(1);
  p.push(2);
  p.push(3);

  // not working as priority queue does not support iterator
  // does not support end(), begin(), back(), front()
  priority_queue<int>::iterator it;
  for (it = p.begin(); it != p.end(); it++){
    cout<<*it<<" ";
  }
  cout<<endl;

  return 0;
}