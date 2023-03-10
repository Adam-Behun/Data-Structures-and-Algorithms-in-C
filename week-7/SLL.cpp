#include "sll.h"
#include <iostream>
using namespace std;

SL_list::SL_list(){
    head = new Node;
    head->next = NULL;
    head->ele = NULL;
    length = 0;
}

SL_list::~SL_list(){
    cout<<"Destructor is called."<<endl;
}

bool SL_list::isEmpty(){
    if (length == 0){
        return true;
    }else{
        return false;
    }
}

void SL_list::push_front(int ele){
    if (isEmpty()){
        head->ele = ele;
    }else{
        Node* newNode = new Node;
        newNode->ele = ele;
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void SL_list::push_back(int ele){
    if (isEmpty()){
        head->ele = ele;
    }else{
        Node* newNode = new Node;
        newNode->ele = ele;
        newNode->next = NULL;

        Node* = temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    length++;
}

void SL_list::pop_front(){
    if(isEmpty()){
        cout<<"Error: Empty list!"<<endl;
    }else{
        Node* temp = new Node
        temp = head->next;
        delete head;
        head = temp;

        length--;
    }
}

void SL_list::print(){
    if(isEmpty()){
        cout<<"Error: Empty list!"<<endl;
    }else{
        Node* temp = new Node;
        temp = head;
        while (temp){
            cout<<temp->ele<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int SL_list::get_length(){
    return length;
}