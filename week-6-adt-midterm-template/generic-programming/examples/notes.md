# Generic Programming
- typename and class are synonyms but use typename
- objects and functions should be generic in programs

## Function template
- General algorithm that accept different data types in functions
- swap function from the past week can only take int inputs
  - we can use function overloading - basically two same functions working with different data types with the same operations
    - use template to define a generic function that accepts different data types using just one block (no need for function overload)

## Hidden schemas
- Understand the hidden schemes of programming learned only by experience
  - Template hidden schemes
    - only initializes functions after they are called from main
      - use typeid to know what data type the variable is in a generic function
    - uses overloading when there is a different number of inputs to the function or same data types
    - if you overload generic function with normal function, the normal function gets called because the template function is not initialized while the normal function is
    - functions are initialized, unless it is a generic function

## Class template
- used to initialize different classes
- define one class student that can create students with different data types for student's private data members
- "student<double, int> Bob" means that the data type of Bob is student, double, int