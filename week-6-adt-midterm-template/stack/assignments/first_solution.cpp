#include <iostream>
using namespace std;

/* Find the second largest element in an array without sort 
This is my first solution using 2 for loops where the first one finds the maximum
and the second one finds the second maximum*/

// function declaration before main
int secondLargest(int[], int);

// Driver program
int main(){
    int size;
    cout<<"What's the size of the array? "<<endl;
    cin>>size;

    // initialize an array of size "size"
    int arr[size] = {0};
    cout<<"What are the elements of the array? "<<endl;

    // insert into the array
    for (int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    // print the array in whole
    cout<<"Elements of the array"<<endl;
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // call the function secondLargest and pass the address of the first element of the array and its size
    cout<<"The second largest element is "<<secondLargest(arr, size)<<endl;

    return 0;
}

// function definition
// inputs is an array of ints, and the size of the array
int secondLargest(int arr[], int array_size){
    int largest_ele = arr[0];
    int second_largest_ele = arr[0];

    // iterate over the array
    for (int i=0 ; i<array_size ; i++){

        // store the largest element seen in largest_ele variable
        if (arr[i] >= largest_ele){
            largest_ele = arr[i];
        }
    }

    // second loop iterate over the array
    for (int i=0 ; i<array_size ; i++){

        // compare the current iteration against the largest and second largest elements
        if (arr[i] > second_largest_ele && arr[i] < largest_ele){

            // if pass, set the second largest to the current iteration
            second_largest_ele = arr[i];
        }
    }
    // returns a second largest element of the array
    return second_largest_ele;
}