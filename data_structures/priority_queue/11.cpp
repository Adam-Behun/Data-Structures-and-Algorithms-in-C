#include <iostream>
#include <queue>
using namespace std;

class person{
public:
  int age;
  string name;
  person(int input1, string input2):age(input1), name(input2){};
};

struct Compare{
  bool operator()(person const &p1_old, person const &p2_new){
    return p1_old.age > p2_new.age; // smaller element first
  }
};

int main(){
  priority_queue<person, vector<person>, Compare> p;

  // these push methods will not work as they expect just one argument of the person data type
  // but receive two "int" and "string" arguments
  p.push(10, "Alice");
  p.push(11, "Bob");
  p.push(12, "Eve");

  while (!p.empty()){
    cout<<p.top().name<<" "<<p.top().age;
    p.pop();
  }
  return 0;
}