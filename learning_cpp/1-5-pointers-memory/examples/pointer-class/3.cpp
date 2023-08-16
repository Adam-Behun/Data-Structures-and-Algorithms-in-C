#include <iostream>
using namespace std;

class student{
    public:
    int id;
    string name;

    // student constructor
    student(int input_id, string input_name):id(input_id), name(input_name){cout<<"Constructor was called for ID: "<<id<<endl;}
};


int main(){

    // myClass will be an array of students
    // sequentially stored student objects
    student myClass[3] = {student(1, "Alice"), student(2, "Bob"), student(3, "Josh")};
    
    // pointing to the first element of the array
    student *p = myClass;

    /*      These three are equal, so the first element of the array is the id of the first student's object         */
    cout<<p<<" --> value of the pointer"<<endl;
    cout<<&myClass[0]<<" --> address of the first element of the array"<<endl;
    cout<<&myClass[0].id<<" --> address of the first object's id" <<endl;

    /*  Prints object's IDs using pointers. This points the pointer to the objects                                   */
    cout<<p->id<<" --> access the first object's id using a pointer"<<endl;
    p++;
    cout<<p->id<<" --> access the second object's id using a pointer"<<endl;
    p--;
    cout<<p->id<<" --> access the first object's id using a pointer"<<endl;
    p++;
    p++;
    cout<<p->id<<" --> access the third object's id using a pointer"<<endl<<endl;
    
    
    /*  Print the name of the second object using a pointer and using the array of students                          */
    p--;
    p--;
    cout<<p->name<<" --> access the first object's name using a pointer"<<endl;
    p++;
    cout<<p->name<<" --> name of the second object"<<endl;
    p++;
    cout<<p->name<<" --> name of the third object"<<endl;

    cout<<p->id<<" --> pointer stays pointing to the third element"<<endl;
    cout<<p->name<<" --> same here"<<endl<<endl;

    /*  Use the array name to access the members of the array which are objects of the student class                 */
    cout<<myClass[0].name<<endl;
    cout<<myClass[1].name<<" --> Name of the second object using the array name = Bob"<<endl;

    return 0;
}