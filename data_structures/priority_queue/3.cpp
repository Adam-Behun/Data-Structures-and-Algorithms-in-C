#include <iostream>
#include <deque>
using namespace std;

int main(){
  deque<int> p;

  p.push_back(1);
  p.push_back(2);
  p.push_back(3);

  deque<int>::iterator it;
  for (it = p.begin(); it != p.end(); it++){
    cout<<*it<<" ";
  }
  cout<<endl;

  return 0;
}