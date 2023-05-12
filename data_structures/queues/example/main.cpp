// implement queue using a linked list
// with menu-driven interface

#include <iostream>
using namespace std;

// declare a datatype node
class node{

// public elements are int and a pointer to the next node
public:
  int data;
  class node *next;
};

// these are not members of the class
// they are pointers to its objects
node* front = NULL;
node* rear = NULL;
node* temp;

void insert(){
  int val;
  cout<<"Insert the element in queue: "<<endl;
  cin>>val;
  if(rear == NULL){
    rear = (class node *)malloc(sizeof(class node));
    rear->next = NULL;
    rear->data = val;
    front = rear;
  }else{
    temp = (class node *)malloc(sizeof(class node));
    rear->next = temp;
    temp->data = val;
    temp->next = NULL;
    rear = temp;
  }
}

void Delete(){
  temp = front;
  if (front == NULL){
    cout<<"Underflow"<<endl;
    return;
  }
  else 
  if(temp->next != NULL){
    temp = temp->next;
    cout<<"Element deleted from queue is "<<front->data<<endl;
    free(front);
    front = temp;
  }
  else{
    cout<<"Element deleted from queue is "<<front->data<<endl;
    free(front);
    front = NULL;
    rear = NULL;
  }
}

void display(){
  temp = front;
  if (front == NULL && rear == NULL){
    cout<<"Queue is empty"<<endl;
    return;
  }
  cout<<"Queue elements are: ";
  while (temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int main(){
  int ch;
  cout<<"1) Insert element into queue."<<endl;
  cout<<"2) Delete element from queue."<<endl;
  cout<<"3) Display all the elements from the queue."<<endl;
  cout<<"4) Exit."<<endl;
  do{
    cout<<"Enter your choice: "<<endl;
    cin>>ch;
    switch (ch){
      case 1: insert();
      break;
      case 2: Delete();
      break;
      case 3: display();  
      break;
      case 4: cout<<"Exit."<<endl;
      break;
      default: cout<<"Invalid choice"<<endl;
    }
  }
  while (ch!= 4);
  return 0;
}