#include "sll-queue.h"
#include "sll-queue.cpp"
#include <iostream>
using namespace std;


// testing my functions
int main(){
  
  SL_list<int> some_int;

  some_int.display();
  some_int.addBack(6);
  some_int.addBack(5);
  some_int.addBack(4);
  some_int.addBack(3);
  some_int.display();
  some_int.addBack(5);
  some_int.addMiddle(3, 2);
  some_int.display();
  some_int.removeNode(4);
  some_int.display();

  
  SL_list<double> some_double;

  some_double.display();
  some_double.addBack(3.2);
  some_double.addBack(4.5);
  some_double.addBack(5.7);
  some_double.display();
  some_double.removeNode(1);
  some_double.display();

  Queue<int, 3> q;  

  q.dequeue();

  cout<<"----"<<endl;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  cout<<"Front: "<<q.front()<<endl;
  cout<<"Back: "<<q.back()<<endl;
  q.print();
  cout<<endl;

  return 0;
}