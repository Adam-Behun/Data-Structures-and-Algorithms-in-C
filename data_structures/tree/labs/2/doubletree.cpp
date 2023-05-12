#include "doubletree.hpp"
#include <iostream>
using namespace std;

/* most functions are the same as in the first questions
this program inputs doubles instead of ints */

doubletree::doubletree(){
  root = nullptr;
}

doubletree::~doubletree(){
  cout<<endl;
  cout<<"Destructor is called"<<endl;
  destroy(root);
}

void doubletree::destroy(Node *temp){
  while (temp != nullptr){
    destroy(temp->left);
    destroy(temp->right);
    cout<<"Delete: "<<temp->ele<<endl;
    delete temp;
    temp = nullptr;
  }
}

bool doubletree::is_empty(){
  if (root == nullptr){
    return true;    
  } else {
    return false;
  }
}

void doubletree::create(double ele){
  if (is_empty()){
    root = new Node;
    root->ele = ele;
    root->right = nullptr;
    root->left = nullptr;
    cout<<"Root is: "<<root->ele<<endl;
  } else {
    Node *newNode = new Node;
    newNode->ele = ele;
    newNode->right = nullptr;
    newNode->left = nullptr;
    insert(root, root, newNode, 0);
  }
}

void doubletree::insert(Node *child, Node *parent, Node *newNode, int flag){

  // checking whether the newNode's ele is the same as the parent's ele
  if (newNode->ele == parent->ele){
    cout<<"Error! The child node should not be equal to the parent node!"<<endl;
    return;
  }
  if (child == nullptr){
    if (flag == 1){
      cout<<"left insertion: "<<newNode->ele<<". Parent: "<<parent->ele<<endl;
      parent->left = newNode;
    } else if (flag == 2){
      cout<<"right insertion: "<<newNode->ele<<". Parent: "<<parent->ele<<endl;
      parent->right = newNode;
    }
  } else {
    if (newNode->ele <= child->ele){
      insert(child->left, child, newNode, 1);
    } else {
      insert(child->right, child, newNode, 2);
    }
  }
}

void doubletree::print(){
  cout<<"PostOrder: "<<endl;
  PostOrder(root);
  cout<<endl;
}

void doubletree::PostOrder(Node *temp){
  if (temp != nullptr){
    PostOrder(temp->left);
    PostOrder(temp->right);
    cout<<temp->ele<<" ";
  }
}