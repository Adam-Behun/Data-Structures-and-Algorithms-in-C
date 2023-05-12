#include <iostream>
#include <queue>
using namespace std;

class person{
public:
  int age;
  string name;
  person(int input1, string input2):age(input1), name(input2){}
};

struct Compare{
  bool operator()(person const &p1_old, person const &p2_new){
    return p1_old.age > p2_new.age; // smaller element first
  }
};

int main(){
  priority_queue<person, vector<person>, Compare> p;

  p.emplace(10, "Alice");
  p.emplace(11, "Bob");
  p.emplace(12, "Eve");

  while (!p.empty()){
    cout<<p.top().age<<" "<<p.top().name<<endl;
    p.pop();
  }

  return 0;
}