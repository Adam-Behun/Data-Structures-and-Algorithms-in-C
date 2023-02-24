#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};    // You should not declare any additional variables in this program
    int* ptr = NULL;      // You should use this pointer to access the array
    int index = 0;
    int max_element = 0;

    /* You can initialize ptr here */
    ptr = arr;
    cout<<"Please input some data: "<<endl;
    for(int i = 0; i<10; i++){   // You should not change this for loop
       cin>>*ptr++;              // cin into the memory address ptr points to, then ++
    }  
  
    max_element = arr[0];        // initialize max_element to first index of the array
    ptr = arr;                   // reset ptr to point to first index of the array

    for(int i = 9; i >= 0; i--){ 
      if (*ptr >= max_element){  // check value of what ptr points to with max_element
        max_element = *ptr;      // if 1, assign max_element w value that ptr points to
        index = 9 - i;           // arr - ptr works here, too
        }
      ptr++;                     // inside for loop, move ptr right and check condition again
      }
    cout<<"The max element in this array is: "<<max_element<<". The index is: "<<index<<endl;

    return 0;
}