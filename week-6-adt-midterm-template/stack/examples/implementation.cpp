/* Fixed size array, functions initialized outside of class declaration
using top as a variable representing the top of the array */


#include <iostream>
using namespace std;

// class definition
// Stack is a datatype, a class
class Stack{

    // private data member int top
    private:
    int top;
    const int MAX = 10;

    // public data member an int array with the size MAX
    public:
    int a[MAX];

    // constructor setting the int private variable "top" to 0
    Stack() {top = 0;}

    // function declarations as they perform public operations on the Stack objects
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

// function definitions outside of class declaration

// accepts an int x and returns bool upon succesful push
bool Stack::push(int x){
    
    // 
    if (top >= (MAX -1)){
        cout<<"Stack overflow";
        return false;
    }
    else{
        this->a[++top] = x;
        cout<<x<<" pushed into stack\n";
        return true;
    }
}

int Stack::pop(){
    if (top < 0){
        cout<<"Stack underflow";
        return 0;
    }
    else {
        int x = this->a[top--];
        return x;
    }
}

int Stack::peek(){
    if (top < 0){
        cout<<"Stack is empty";
        return 0;
    }
    else {
        int x = this->a[top];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top < 0);
}

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<" Popped from stack\n";

    cout<<"Top elements now is "<<s.peek()<<endl;

    cout<<"Elements present in the stack are: ";
    while (!s.isEmpty()){
        cout<<s.peek()<<" ";

        s.pop();
    }

    return 0;
}