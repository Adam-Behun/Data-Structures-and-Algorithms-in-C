/* 

Dynamic and generic implementation of stack
I changed the variable T arr[max_size] to a pointer 
because I did not know how I can use it and still make this program dynamic.

*/

#include <iostream>
using namespace std;

template <typename T> class stack {
private:
  T* arr; // dynamic array
  int length;
  int capacity; // capacity of the array

  // define any additional attributes here

public:
  // Constructor
  stack(int max_size): length(0), capacity(max_size) {
    arr = new T[max_size];
  }

  // Destructor
  ~stack() {
    delete[] arr;
  }

  void push(T ele); // Print "Error: Stack Overflow" if the current size is
                    // larger than capacity
  void pop(); // Print "Error: Stack Underflow" if the current size is 0 or smaller
  void top(); // Print the top element in a stack. Print "Empty stack" if empty
  void size();    // Print the size of the stack
  void display(); // Print all elements
  bool empty();   // Return true if empty stack, otherwise return false
};

/* Body of the functions are written here, outside of class declaration */

template<typename T>
void stack<T>::push(T ele) {
  if (length == capacity) {
    cout << "Error: Stack Overflow" << endl;
    return;
  }

  arr[length++] = ele;
}

template<typename T>
void stack<T>::pop() {
  if (length == 0) {
    cout << "Error: Stack Underflow" << endl;
    return;
  }

  length--;
}

template<typename T>
void stack<T>::top() {
  if (length == 0) {
    cout << "Empty stack" << endl;
    return;
  }

  cout << arr[length - 1] << endl;
}

template<typename T>
void stack<T>::size() {
  cout << length << endl;
}

template<typename T>
void stack<T>::display() {
  for (int i = length - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

template<typename T>
bool stack<T>::empty() {
  return length == 0;
}

int main() {
  int max_size;
  cout << "Enter the maximum size of the stack: ";
  cin >> max_size;

  stack<int> s(max_size);

  s.push(1);
  s.push(2);
  s.push(3);

  s.display(); // Output: 3 2 1

  s.pop();
  s.pop();

  s.display(); // Output: 1

  s.top(); // Output: 1
  s.size(); // Output: 1

  return 0;
}