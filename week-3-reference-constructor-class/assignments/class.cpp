 #include <iostream>
 using namespace std;


class A{
 public:

    // class A has 1 public data member
    int num;

    // class A constructor with no params
    A(){
       num = 1;
    }

    // copy constructor for class B
    A(A &obj){
        cout<<"Copy constructor A"<<endl;
        num += obj.num + 1;
    }

    // class A constructor taking 1 int as param 
    A(int a){
        num = a;
    }

    // class A gets generated a default default constructor by the compiler

 };

 class B{
 public:

     // class B has 1 public data member int num
     int num;

     // constructor for class B taking 1 parameter as an int
     B(int a){
         num = a;
     }

     // copy constructor for class B
     B(B &obj){
         cout<<"Copy constructor B"<<endl;
         num = obj.num+1;
     }   

     // user-specified destructor for class B
     ~B(){
         cout<<"Destructor B"<<endl;
     }
 };

 // functions declarations 
 void func(A);
 void func2(B);
 void func3(B &);
 
 int main(){
     // create object test1 (class A), constructor with no params called, ln 12
     A test1; // no print

     // print the num variable of test1 (value 1), ln 13 sets num to 1 
     cout<<test1.num<<endl; // prints 1

     // call copy constructor and create a copy of an object test1, ln 17
     test1 = 2;             // prints Copy constructor A

     // call function func(A) on test1 object (returns "obj.num +=1"), ln 98
     func(test1);           // no print  

     // prints results of the func(test1) operation above (returned num+=1) ln 99
     cout<<test1.num<<endl; // prints 2

     // create object test2 (class B), pass integer 1, constructor ln 38 is called
     B test2(1);            // no print

     // create object test3, copy constructor called, ln 43, pass in the object test2
     B test3(test2);        // prints Copy constructor B

     // call func2 on the test2 object, sets obj.num to 3, pass by value --> copy of object is made, ln 43 > ln 103 > ln 49
     func2(test2);          // prints Copy constructor B<<endl<<Call func2<<endl<<DestructorB as the function returned and the tmp object is deleted afterwards
     
     // print num of test2 object which is not changed since its initialization in ln 76
     cout<<test2.num<<endl; // prints 1

     // passed by reference, no copy object is created, the original is changed, ln 109 
     func3(test3);          // prints Call func3
     
     // result of the previously executed function, deletes the test3 object, ln 49
     cout<<test3.num<<endl; // prints 3, Destructor B
     
     // object test2 goes out of scope and contructor B gets called, ln 49       
     return 0;              // prints Destructor B

 }

 // functions initializations
 void func(A obj){
     obj.num += 1;
     return;
 }
 
 void func2(B obj){
     cout<<"Call func2"<<endl;
     obj.num = 3;
     return;
 }
 
 void func3(B &obj){
     cout<<"Call func3"<<endl;
     obj.num += 1;
     return;
 }