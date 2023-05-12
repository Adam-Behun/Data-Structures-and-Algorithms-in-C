#include "binarytree.cpp"
#include <iostream>
using namespace std;

int main(){
  binarytree tree;
  tree.create(1);
  tree.create(4);
  tree.create(3);
  tree.create(5);
  tree.create(6);
  tree.create(7);
  tree.create(14);
  tree.create(15);

  cout<<endl;
  tree.print();

  return 0;
}