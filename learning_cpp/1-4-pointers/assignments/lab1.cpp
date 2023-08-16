#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};  // You should not declare any additional variables in this program
    int* ptr = NULL;    // You should use this pointer to access the array
    
    /* You can initialize ptr here */
    ptr = arr;
    cout<<"Please input some data: "<<endl;
    for(int i = 0; i<10; i++){       
      cin>>*ptr++;                 // cin into the memory location ptr points to, then ++
    }

    ptr = arr;                     // reset the ptr to point to the arr[0]
    cout<<"The elements in this array are: "<<endl;
    for(int i = 0; i<10; i++){       
      cout<<*ptr++;                // print out the value ptr points to, then ++
    }
    cout<<endl;

    return 0;
}