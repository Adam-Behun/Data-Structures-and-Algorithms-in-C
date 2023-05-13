#include <iostream>
using namespace std;

/* Your template definition */
template <typename T>
class calculator{
private:
    /* You can define any attributes here */
    T num1;
    T num2;

public:
    // constructs an object
    // this object is of calculator + T + T data type where T and T are any data type that is passed to this constructor
    calculator(T first, T second){
        num1 = first;
        num2 = second;
        cout<<"Object is constructed and its private data members are: "<<num1<<" and "<<num2<<endl;
    }

    /* Your add function */
    T add(){
        cout<<"Adding the numbers: "<<num1<<" and "<<num2<<endl;
        T result = num1 + num2;
        return result;
    }
    
    /* Your substract function */
    T substract(){
        cout<<"Subtracting the numbers: "<<num1<<" and "<<num2<<endl;
        T result = num1 - num2;
        return result;
    }

    /* Your divide function */
    T divide(){
        cout<<"Dividing the numbers: "<<num1<<" and "<<num2<<endl;
        T result = num1 / num2;
        return result;
    }
    
    /* Your multiply function */
    T multiply(){
        cout<<"Multiply the numbers: "<<num1<<" and "<<num2<<endl;
        T result = num1 * num2;
        return result;
    }
};

int main(){

    /* You should test your calculator here */

    // construct a student int object
    calculator<int> intObject(2,3);

    // construct a student float object
    calculator<float> floatObject(2.2, 3.3);

    // construct a student double object
    calculator<double> doubleObject(2.2, 3.3);

    // call the add function on the student T object
    cout<<intObject.add()<<endl;
    cout<<floatObject.add()<<endl;
    cout<<doubleObject.add()<<endl;

    // call the substract function on the student T object
    cout<<intObject.substract()<<endl;
    cout<<floatObject.substract()<<endl;
    cout<<doubleObject.substract()<<endl;

    // call the divide function on the student T object
    cout<<intObject.divide()<<endl;
    cout<<floatObject.divide()<<endl;
    cout<<doubleObject.divide()<<endl;

    // call the multiply function on the student T object
    cout<<intObject.multiply()<<endl;
    cout<<floatObject.multiply()<<endl;
    cout<<doubleObject.multiply()<<endl;

    return 0;
}