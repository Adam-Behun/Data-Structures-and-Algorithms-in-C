#include <iostream>
#include <queue>
using namespace std;

class person{
public:
  int age;
  string name;
  person(int input1, string input2):age(input1), name(input2){}
};

struct Compare { // comparator 
  bool operator()(person const &p1_old, person const &p2_new){
    return p1_old.age < p2_new.age; // larger element first
  }
};

int main(){
  priority_queue<person, vector<person>, Compare> p;
  person Alice(10, "Alice");
  person Bob(11, "Bob");
  person Eve(12, "Eve");

  p.push(Alice);
  p.push(Bob);
  p.push(Eve);

  while(!p.empty()){
    cout<<p.top().name<<" "<<p.top().age<<endl;
    p.pop();
  }
  
  return 0;
}