#include <iostream>
using namespace std;

template <typename T, int max_size>
class maxStack {
private:

    T arr[max_size];
    int length;
/*
Problem: 
    Find the largest element in a stack.

Approach 1
    Initialize max variable and keep track of push function
    if the number I push in is higher than max
    update max
    find method returns max
    
Approach 2
    use a for loop and search for the largest element

Approach 3 - pop 2 elements instead of 1
*/


public:

    // constructor initializing length = 0 because we start with an empty stack
    maxStack() {length = 0;}

    // function declarations

    // push function takes in any data type to push it onto the stack
    bool isEmpty();
    void push(T ele);
    void pop();
    void top();
    int find();
}; 

template<typename T, int max_size>
bool maxStack<T, max_size>::isEmpty() {
    if (length == 0){
        return true;
    }
    return false;
}

// function definitions outside of the class declaration
template<typename T, int max_size>
void maxStack<T, max_size>::push(T ele) {
    if (length == max_size) {
        cout << "Error: Stack Overflow" << endl;
        return;
    }
    else {
        arr[length++] = ele;
        cout<<"Pushed in "<<ele<<endl;
        return;
    }
}

// needs to pop 2 elements
template<typename T, int max_size>
void maxStack<T, max_size>::pop() {
    if (length == 0) {
        cout << "Error: Stack Underflow" << endl;
        return;
    }
    else {
        cout<<"Popped "<<arr[length]<<" and ";
        length--;
        cout<<arr[length];
        length--;
    }
}

template<typename T, int max_size>
void maxStack<T, max_size>::top() {

    if (length == 0) {
        cout << "Empty stack" << endl;
        return;
    }

    cout<<"Top element: "<<arr[length-1]<<endl;
}


template<typename T, int max_size>
int maxStack<T, max_size>::find() {
    if (length == 0) {
        cout << "Empty stack" << endl;
        return 0;
    }
    else {
        return arr[length-1];
    }
}


int main() {

    maxStack<int, 5> obj;

    obj.push(1);
    obj.push(2);
    obj.push(5);
    obj.push(3);
    obj.push(9);

    cout<<"The max element is "<<obj.find()<<endl;

    obj.pop();
    cout<<endl;

    cout<<"The max element is "<<obj.find()<<endl;

    return 0;
}