- last-in-first-out
- Stack is an ADT in which items are only inserted or removed from the top of a stack. Stacks can be implemented using a linked list, an array, or a vector

- Push(stack, x) --> inserts an item on the top of the stack
- Pop(stack) --> removes and returns the item at the top of the stack
- Peek(stack) --> returns but does not remove item at top of stack
- IsEmpty(stack) --> returns true if stack has no items
- GetLength(stack) --> returns the number of items in the stack


Stacks using linked lists
- push is performed by creating a new list node, assigning the node's data with the item, and prepending the node to the list
- pop is performed by assigning a local variable with the head node's data, removing the head node from the list, and then returning the local variable


# Generic Programming
- typename and class are synonyms but use typename
- use different data types in programs

## Function template
- General algorithm that accept different data types in functions
- the swap function from the past week can only take ints
  - then we can use function overloading - basically two same functions working with different data types with the same operations
    - use template to define a generic function that accepts different data types using just one block (no need for function overload)

## Hidden schemans
- Understand the hidden schemes of programming learned by experience
  - Template hidden schemes
    - only initializes functions after they are called from main
      - use typeid to know what data type the variable is in a generic function
    - uses overloading when there is a different number of inputs to the function or same data types
    - understand variable names in the generic function declarations
    - if you overload generic function with normal function, the normal function gets called because the template function is not initialized while the normal function is
    - functions are initialized, unless it is a generic function

## Class template
  - used to initialize different classes
  - define one class student that can create students with different data types for variables
  - student<double, int> Bob means that the data type of Bob is student, double, int


Objects and functions should be generic in programs


# You gotta know stack
Stack ADT
ADT is the black box
Difference between ADT and data structures

# Stack
- Last-in first-out (LIFO) - plates dispenser
  - imagine the program Hello in stack
    - O
    - L
    - L
    - E
    - H
- only alow access to the top element
- array or linked list implementation
- in an array, only allow access to the top element and you have a stack
- in a linked list, remember you have a pointer to the next element as well
- array is more memory efficient but is of fixed size


Applications of stack
- CPU is using stack - CPU task management
- Register in CPU (AX, BX, CX)
- Computer games use stack - gaming design
  - You finish the step 1, pop out, you move to step 2, completed are stored elsewhere

Famous question
Define stack
  if "[" the next is "]"

push, pop, top, size, empty