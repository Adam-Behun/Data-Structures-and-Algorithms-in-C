#include <iostream>
#include "sll.h"
#include "SLL.cpp"
using namespace std;

int main(){
    SL_list newList;

    newList.print();

    newList.push_front(1);
    newList.push_back(2);
    newList.push_back(3);

    newList.pop_front();
    newList.print();

    cout<<"The length: "<<newList.get_length()<<endl;

    newList.push_front(4);
    newList.print();
    cout<<"The length: "<<newList.get_length()<<endl;

    return 0;
}