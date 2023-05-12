#include <iostream>
using namespace std;

/* Find the second largest element in an array without sort 
This is my second solution using 1 loop  */

// function declaration before main
int secondLargestElement(int[], int);

// Driver program
int main(){
    int size;
    cout<<"What's the size of the array? "<<endl;
    cin>>size;

    // initialize the array of size "size"
    int arr[size] = {0};

    // insert into the array
    cout<<"What are the elements of the array? "<<endl;
    for (int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    // print the whole array
    cout<<"Elements of the array"<<endl;
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // call the function and pass the address of the first element of the array and its size
    cout<<"The second largest element is: "<<secondLargestElement(arr, size)<<endl;

    return 0;
}

// expects an int array and an int size
int secondLargestElement(int array[], int array_size){
    int largest_ele = array[0];
    int second_largest_ele = array[0];

    // iterate over the array
    for (int i=0 ; i<array_size ; i++){

        // if current larger than largest
        if (array[i] > largest_ele){

            // largest is assigned to second_largest
            second_largest_ele = largest_ele;

            // current is assigned to largest
            largest_ele = array[i];
        }

        // if current is larger than the second largest and it is not the largest
        else if(array[i] > second_largest_ele && array[i] != largest_ele){
            
            // second laregst is the current
            second_largest_ele = array[i];
        }
    }

    // returns the second largest element of the array
    return second_largest_ele;
}