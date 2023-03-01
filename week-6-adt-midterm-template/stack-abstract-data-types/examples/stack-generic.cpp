#include <iostream>
using namespace std;

// array can be of any data type
// max_size must be int
template <typename T, int max_size>
class stack {
private:

    // array of any data type and size "max_size"
    T arr[max_size];
    int length;

public:

    // constructor initializing length = 0 because we start with an empty stack
    stack() { length = 0; }

    // function declarations

    // push function takes in any data type to push it onto the stack
    void push(T ele);
    void pop();
    void top();
    void size();
    void display();
    bool empty();
}; 

// function definitions outside of the class declaration
template<typename T, int max_size>

// returning void, has template params T and max_size
// accept "ele" = elements to push onto the stack
void stack<T, max_size>::push(T ele) {

    // length == max_size is checking whether we have empty slots in our array (stack)
    if (length == max_size) {
        cout << "Error: Stack Overflow" << endl;
        return;
    }

    // if there is space on top of the array
    // put "ele" on top of the "arr" (stack)
    // then increment "length" by 1
    arr[length++] = ele;
}

template<typename T, int max_size>
void stack<T, max_size>::pop() {

    // check if we have eny elements
    if (length == 0) {
        cout << "Error: Stack Underflow" << endl;
        return;
    }

    // if we do, decrease "length" by 1
    // losing the top element
    length--;
}

template<typename T, int max_size>
void stack<T, max_size>::top() {

    // check: is it an empty stack? 
    if (length == 0) {
        cout << "Empty stack" << endl;
        return;
    }

    // last element that was added
    // 1 element lower than the value of length
    cout << "Top element: " << arr[length-1] << endl;
}

template<typename T, int max_size>
void stack<T, max_size>::size() {

    // "length" variable keeps track of the "size" of the array
    cout << "Size of stack: " << length << endl;
}

template<typename T, int max_size>
void stack<T, max_size>::display() {
    cout << "Stack elements: ";

    // iterate over the array
    // start at the end of the array and decrease until at index 0
    for (int i = length-1; i >= 0; i--) {

        // print the current iteration element
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<typename T, int max_size>
bool stack<T, max_size>::empty() {

    // using length to see if there are any elements in the array
    if (length == 0){
        return true;
    }
    return false;
}

int main() {

    // size of the array is fixed at compliation time
    // using heap would give me a dynamic array

    // creating obj
    stack<int, 5> obj;

    // other possible objects are
    // stack<double, 10> doubleObj;
    // stack<float, 100> floatObj;

    // testing my implementation on the int array stack object

    // push elements onto the stack
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.push(60);   // overflow because the size is 5 and this is the 6.th element
    obj.pop();      // lose the last-in element 
    obj.top();      // what's the last-in element
    obj.size();     // size of the stack
    obj.display();  // all elements
    cout<<"Is the stack empty?"<<endl<<obj.empty()<<endl;
    
    return 0;
}