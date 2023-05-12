#include <iostream>
using namespace std;

class student{
private:
    int id = 0;
public:
    /* Your codes */
    int getID();

    
    // construct student objects with appropriate IDs
    student(int input_id){

        // set the id for each student object
        id = input_id;
    }

    // destruct student objects
    ~student(){
        cout<<"Destructor was called for ID: "<<id<<endl;
    }
};

// takes in a pointer to an array of pointers to objects of class student
void checkID(student **pointer, int num){

    // initialize max_value with the first student
    int max_value = pointer[0]->getID();
    cout << "Total number of students:" << endl;
    cout << num << endl;
    cout << "ID for each student:" << endl;
    for (int i =0; i< num; i++){

        // insert IDs for inividual students
        cout<<pointer[i]->getID()<<" ";
    }

    cout << endl;
    cout<<"Checking duplicated IDs..."<<endl;
    cout<<"------"<<endl;

    // iterate over num passed from main
    for (int i=0; i < num - 1; i++){

        // use that the IDs are already sorted and compare the next value against max_value storing the current max
        if (pointer[i]->getID() == pointer[i+1]->getID()){

            // delete duplicated object
            cout<<"Deleting the duplicated ID: "<<pointer[i]->getID()<<endl;
            
            // delete the object
            delete pointer[i];

            // set pointer to nullptr
            pointer[i] = nullptr;
        }
    }
    cout<<"------"<<endl;
    cout<<"Checking process complete!"<<endl;

}

// function that gets the private data member id of students
int student::getID(){
  return id;
}

int main() {
    int num;            // size of the array
    char val = 'a';     // used for delete database while loop
    cout<<"Total number of students: "<<endl;
    cin>>num;

    // student pointer (stack) pointing to arrays of student pointers (heap). Student objects are not initialized
    student **ptr = new student *[num];

    /* Your codes */
    cout<<"ID for each student: "<<endl;

    // save the input_id and create student objects using them
    for (int i = 0; i < num; i++){
        int input_id;
        cin>> input_id;

        // calls constructor and creates a new student object to where ptr from the array points to
        ptr[i] = new student(input_id);
    }

    // pass a pointer to the array of pointers and the size of the classroom
    checkID(ptr, num);
    
    // once the class is established, ask whether to delete
    while(cin){
        cout << "Delete Database? Y/N"<<endl;
        cin >> val;
        if(val == 'Y'){
            break;
        }
    }

    // release heap memory
    for (int i=0; i<num; i++){

        // delete the object
        delete ptr[i];

        // set the object's pointer to nullptr
        ptr[i] = nullptr;
    }

    return 0;
}