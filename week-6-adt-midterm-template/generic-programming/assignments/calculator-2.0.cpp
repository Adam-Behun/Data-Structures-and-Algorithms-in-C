#include <iostream>
using namespace std;

/* This is not the best implementation of this program but matches the reqs. All parts of this program could be improved but due to lack of time are not. 
It is just the first implementation */

/* Your template definition */
template <typename T1, typename T2>
class calculator{
private:
    /* You can define any attributes here */
    T1 num1;
    T2 num2;

public:
    // constructs an object
    // this object is of calculator T T data type where T and T are any data type that is passed to this constructor
    // makes sense to only use numerical data types as this is a calculator
    // error-handling not implemented
    calculator(T1 first, T2 second){
        num1 = first;
        num2 = second;
    }

/* All my function implementations are returning the first variable's data type - could be improved to return double for more precision */
/* All these functions are very similar and could be simplified */
/* There is also no error-hnadling in my code */
    /* Your add function */
    T1 add(){
        cout<<"Adding the numbers: "<<num1<<" and "<<num2<<endl;
        T1 result = num1 + num2;
        return result;
    }
    
    /* Your substract function */
    T1 substract(){
        cout<<"Subtracting the numbers: "<<num1<<" and "<<num2<<endl;
        T1 result = num1 - num2;
        return result;
    }

    /* Your divide function */
    T1 divide(){
        cout<<"Dividing the numbers: "<<num1<<" and "<<num2<<endl;
        T1 result = num1 / num2;
        return result;
    }
    
    /* Your multiply function */
    T1 multiply(){
        cout<<"Multiply the numbers: "<<num1<<" and "<<num2<<endl;
        T1 result = num1 * num2;
        return result;
    }
};

int main(){

    /* You should test your calculator here */

    // Constructing objects
    // These objects can by of any "student" "datatype" "datatype" datatype

    // construct a student int int object
    calculator<int, int> intObject(2, 3);

    // construct a student float float object
    calculator<float, float> floatObject(2.2, 3.3);

    // construct a student double double object
    calculator<double, double> doubleObject(2.2, 3.3);

    // construct a student int double object
    calculator<int, double> intDoubleObject(2, 3.3);
    
    // construct a student double float object
    calculator<double, float> doubleFloatObject(2.6, 3.3);

    // Test addition
    cout<<intObject.add()<<endl;
    cout<<floatObject.add()<<endl;
    cout<<doubleObject.add()<<endl;
    cout<<intDoubleObject.add()<<endl;
    cout<<doubleFloatObject.add()<<endl;

    // Test subtraction
    cout<<intObject.substract()<<endl;
    cout<<floatObject.substract()<<endl;
    cout<<doubleObject.substract()<<endl;
    cout<<intDoubleObject.substract()<<endl;
    cout<<doubleFloatObject.substract()<<endl;

    // Test division
    cout<<intObject.divide()<<endl;
    cout<<floatObject.divide()<<endl;
    cout<<doubleObject.divide()<<endl;
    cout<<intDoubleObject.divide()<<endl;
    cout<<doubleFloatObject.divide()<<endl;

    // Test multiplication
    cout<<intObject.multiply()<<endl;
    cout<<floatObject.multiply()<<endl;
    cout<<doubleObject.multiply()<<endl;
    cout<<intDoubleObject.multiply()<<endl;
    cout<<doubleFloatObject.multiply()<<endl;

    return 0;
}