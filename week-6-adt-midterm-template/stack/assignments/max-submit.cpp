#include <iostream>
using namespace std;

template <typename T, int max_size>
class maxStack {
private:

    T arr[max_size];
    int length;

public:

    // constructor initializing length = 0 because we start with an empty stack
    maxStack() {length = 0;}

    // function declarations

    // push function takes in any data type to push it onto the stack
    bool isEmpty();
    void push(T ele);
    void pop();
    int top();
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
      
    // checking isEmpty()
    else if (isEmpty() == 1){

        // if empty, push an element
        arr[length++] = ele;
      }

      // if not empty
      else if (isEmpty() == 0){

        // if pushed ele is the new biggest element
        if (ele >= top()){

        // push ele on the top
        arr[length++] = ele;  
      }

      // if pushed ele is smaller than the top
      else if (ele < top()){

        // current top is assigned to temp
        // could make this a template
        int temp = arr[length-1];

        // remove top
        pop();

        // put ele on top
        arr[length++] = ele;
        
        // put temp on top of ele as it is smaller than the previous top
        arr[length++] = temp;
      }
    }
}

template<typename T, int max_size>
void maxStack<T, max_size>::pop() {
    if (length == 0) {
        cout << "Error: Stack Underflow" << endl;
        return;
    }
    else {
        length--;
    }
}

template<typename T, int max_size>
int maxStack<T, max_size>::top() {
    if (length == 0) {
        cout << "Empty stack" << endl;
        return 0;
    }
    return arr[length-1];
}

template<typename T, int max_size>
int maxStack<T, max_size>::find() {
    if (length == 0) {
        cout << "Empty stack" << endl;
        return 0;
    }
    else {
      // same as top()
      return top();
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

    cout<<"Popping the top "<<obj.find();
    obj.pop();
    cout<<endl;

    cout<<"The max element is "<<obj.find()<<endl;

    return 0;
}