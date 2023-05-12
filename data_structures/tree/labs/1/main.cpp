#include <iostream>
#include "btree.cpp"
using namespace std;

int main(){
  btree b1;
  b1.create(3);
  b1.create(2);
  b1.create(1);
  b1.create(5);
  b1.create(6);
  b1.create(4);

  cout<<endl;
  b1.print();

  return 0;
}