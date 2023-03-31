#include "My_dequeue.hpp"
#include <iostream>
using namespace std;

int main() {
  My_dequeue deq;

  deq.push_front(1);
  deq.push_front(2);
  deq.push_front(3);
  deq.push_back(4);
  deq.push_back(5);
  deq.push_back(6);
  deq.display();
  deq.begin();

  return 0;
}