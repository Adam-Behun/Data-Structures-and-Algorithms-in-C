/* Fixed size array, functions initialized inside of class declaration 
using top as the top element in the stack */

#include <iostream>

using namespace std;

class Stack {
private:
    int top;            // index of the top element in the stack
    const int MAX = 10; // maximum size of the stack
    int a[MAX];          // array to store the elements of the stack

public:
    Stack() { top = -1; } // constructor, initialize top to -1

    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack overflow\n";
            return false;
        }
        else {
            a[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack underflow\n";
            return 0;
        }
        else {
            int x = a[top--];
            return x;
        }
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return 0;
        }
        else {
            int x = a[top];
            return x;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    cout << "Top element now is " << s.peek() << endl;

    cout << "Elements present in the stack are: ";
    while (!s.isEmpty()) {
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}