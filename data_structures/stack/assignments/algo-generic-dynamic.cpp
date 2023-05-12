/* 

Dynamic and generic implementation of stack
I changed the variable T arr[max_size] to a pointer 
because I did not know how I can use it and still make this program dynamic.

*/

#include <iostream>
using namespace std;

template <typename T> class maxStack {
private:
  T* arr; // dynamic array
  int length;
  int capacity; // capacity of the array

  // define any additional attributes here

public:
  // Constructor
  maxStack(int max_size): length(0), capacity(max_size) {
    arr = new T[max_size];
  }

  // Destructor
  ~maxStack() {
    delete[] arr;
    arr = nullptr;
  }

  bool isEmpty();   // Returns true if the stack is empty. Otherwise, returns false.
  void push(T ele); // Print "Error: Stack Overflow" if the current size is larger than capacity
  void pop();       // Print "Error: Stack Underflow" if the current size is 0 or smaller
  int top();        // Print the top element in a stack. Print "Empty stack" if empty
  int find();       // Returns the max element in the stack.    

};

/* Body of the functions are written here, outside of class declaration */

template<typename T>
bool maxStack<T>::isEmpty() {
  return length == 0;
}

template<typename T>
void maxStack<T>::push(T ele) {
  if (length == capacity) {
    cout << "Error: Stack Overflow" << endl;
    return;
  }

  arr[length++] = ele;
}

template<typename T>
void maxStack<T>::pop() {
  if (length == 0) {
    cout << "Error: Stack Underflow" << endl;
    return;
  }

  length--;
}

template<typename T>
int maxStack<T>::top() {
  if (length == 0) {
    cout << "Empty stack" << endl;
    return 0;
  }
  else {
    return arr[length - 1];
  }
}

template<typename T>
int maxStack<T>::find() {
  if (length == 0) {
    cout << "Empty stack" << endl;
    return 0;
  }
  else{
    return arr[length - 1];
    cout<<arr[length - 1]<<endl;
  }
}

int main() {
  int max_size;
  cout << "Enter the maximum size of the stack: ";
  cin >> max_size;

  maxStack<int> s(max_size);

  s.push(1);
  s.push(2);
  s.push(5);
  s.push(3);
  s.push(9);

  s.find(); // output is 9

  s.pop();

  s.find(); // output is 5

  return 0;
}