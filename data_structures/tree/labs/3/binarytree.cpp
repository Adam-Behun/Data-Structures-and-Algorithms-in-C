#include "binarytree.hpp"
#include <iostream>
using namespace std;

/* similar implementation to the first two questions
changed the create, insert, and destroy methods */

binarytree::binarytree(){
  root = nullptr;
}

binarytree::~binarytree(){
  cout<<endl;
  cout<<"Destructor is called"<<endl;
  destroy(root);
}

// releasing the heap memory
void binarytree::destroy(Node *temp){
  if (temp != nullptr){
    destroy(temp->left);
    destroy(temp->right);

    // following the middle node down from the root
    destroy(temp->middle);
    cout<<"Delete: "<<temp->ele<<endl;
    delete temp;
    temp = nullptr;
  }
  root = nullptr;
}

bool binarytree::is_empty(){
  if (root == nullptr){
    return true;    
  } else {
    return false;
  }
}

void binarytree::create(int ele){

  // if empty, root is the first Node there
  // insert its direct children and set root->ele

  if (is_empty()){
    root = new Node;
    root->ele = 1;
    root->right = new Node;
    root->right->ele = 5;
    root->middle = new Node;
    root->middle->ele = 4;
    root->left = new Node;
    root->left->ele = 3;

    // node with ele 4 has no children in my tree
    root->middle->right = nullptr;
    root->middle->middle = nullptr;
    root->middle->left = nullptr;
    
    // if not empty
  } else {

    // create new Node
    Node *newNode = new Node;
    newNode->ele = ele;
    newNode->right = nullptr;
    newNode->middle = nullptr;
    newNode->left = nullptr;

    // logic behind where to put the node
    // passing the flag determines where left, middle, or right insertion
    // hard-coded created the nodes
    if (ele == 6){
      insert(root->left->left, root->left, newNode, 1);
    } else if (ele == 7){
      insert(root->left->middle, root->left, newNode, 2);
    } else if (ele == 14){
      insert(root->right, root, newNode, 3);
    } else if (ele == 15){
      insert(root->left->left, root->left, newNode, 3);
    }
  }
}

void binarytree::insert(Node *child, Node *parent, Node *newNode, int flag){
  
  // the current node has no children in the direction specified by flag
  if (child == nullptr){
    if (flag == 1){
      parent->left = newNode;
    } else if (flag == 2){
      parent->middle = newNode;
    } else {
      parent->right = newNode;
    }
    
  } else {
    
    if (newNode->ele <= child->ele){
      insert(child->left, child, newNode, 1);
    } else if (newNode->ele > child->ele && newNode->ele < parent->ele) {
      insert(child->middle, child, newNode, 2);
    } else {
      insert(child->right, child, newNode, 3);
    }
  }
}

void binarytree::print(){
  cout<<"PostOrder: "<<endl;
  PostOrder(root);
  cout<<endl;
}

void binarytree::PostOrder(Node *temp){
  if (temp != nullptr){
    PostOrder(temp->left);
    PostOrder(temp->right);
    PostOrder(temp->middle);
    cout<<temp->ele<<" ";
  }
}