#include "btree.hpp"
#include <iostream>
using namespace std;

// constructor
btree::btree(){
  root = nullptr;
}

// destructor
btree::~btree(){
  cout<<endl;
  cout<<"Destructor is called"<<endl;

  // calling the destroy method on the btree Node root
  // on top of the tree
  destroy(root);
}

// destroy method accepting pointer to a Node
void btree::destroy(Node *temp){

  // moves until finds the end of the tree
  while (temp != nullptr){

    // destroys left and right child
    destroy(temp->left);
    destroy(temp->right);
    cout<<"Delete: "<<temp->ele<<endl;

    // deletes the node itself
    delete temp;
    temp = nullptr;
  }
}

bool btree::is_empty(){

  // if there's no root, there's no tree
  if (root == nullptr){
    return true;    
  } else {
    return false;
  }
}

// create a Node in the tree
void btree::create(int ele){

  if (is_empty()){

    // if no root, then create the first Node = root
    root = new Node;
    root->ele = ele;        // set the passed ele

    // left and right child are set to nullptr as we create the nodes one-by-one
    root->right = nullptr;
    root->left = nullptr;
    cout<<"Root is: "<<root->ele<<endl;
  } else {

    // if there is a root (possibly other nodes, too)

    // create new Node
    Node *newNode = new Node; // every Node has ele, left, right elements

    // set the new Node's elements
    newNode->ele = ele;
    newNode->right = nullptr;
    newNode->left = nullptr;

    // call the private insert method on the btree object
    insert(root, root, newNode, 0);
  }
}

// insert method accepting 3 pointers and 1 integer
void btree::insert(Node *child, Node *parent, Node *newNode, int flag){

  // if there's no child node
  if (child == nullptr){

    // insert left option
    if (flag == 1){
      cout<<"left insertion: "<<newNode->ele<<". Parent: "<<parent->ele<<endl;
      parent->left = newNode;

      // insert right option
    } else if (flag == 2){
      cout<<"right insertion: "<<newNode->ele<<". Parent: "<<parent->ele<<endl;
      parent->right = newNode;
    }

  // if there is a child
  } else {

    // if the inserted ele <= child->ele
    if (newNode->ele <= child->ele){

      // insert on the left
      insert(child->left, child, newNode, 1);
    } else {

      // insert on the right
      insert(child->right, child, newNode, 2);
    }
  }
}

// print the tree
void btree::print(){
  cout<<"PreOrder: "<<endl;
  PreOrder(root);
  cout<<endl;

  cout<<"InOrder: "<<endl;
  InOrder(root);
  cout<<endl;

  cout<<"PostOrder: "<<endl;
  PostOrder(root);
  cout<<endl;
}

// recursive implementation of PreOrder method
void btree::PreOrder(Node *temp){

  // root, left, right
  if (temp != nullptr){
    cout<<temp->ele<<" ";
    PreOrder(temp->left);
    PreOrder(temp->right);
  }
}

// recursive implementation of InOrder method
// left , root, right order
void btree::InOrder(Node *temp){
  if (temp != nullptr){
    InOrder(temp->left);
    cout<<temp->ele<<" ";
    InOrder(temp->right);
  }
}

// recursive implementation of PostOrder method
// left, right, root
void btree::PostOrder(Node *temp){
  if (temp != nullptr){
    PostOrder(temp->left);
    PostOrder(temp->right);
    cout<<temp->ele<<" ";
  }
}