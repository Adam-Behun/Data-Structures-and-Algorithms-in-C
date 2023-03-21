// C++ program to find the largest
// three elements in an array
#include <bits/stdc++.h>
using namespace std;

// function accepting the address of the first element and the size of the array
void print3largest(int arr[], int arr_size){

    // intitialize the 3 ints that keep track of the search numbers
    int first, second, third;

    // we need more than 3 ints as input
    if (arr_size < 3){
        cout<<"Invalid input "<<endl;
        return;
    }else{
        third = second = first = INT_MIN;

        // iterate over the array
        for (int i=0 ; i<arr_size ; i++){
            if (arr[i] > first){
                third = second;
                second = first;
                first = arr[i];
            }else if (arr[i] > second && arr[i] != first){
                third = second;
                second = arr[i];
            }else if (arr[i] > third && arr[i] != second){
                third = arr[i];
            }
        }
        cout<<"The three largest elements are: "<<first<<" "<<second<<" "<<third<<" "<<endl;
    }
}


// Driver program
int main(){

    // initialize an array with the following ints
    int arr[] = {12, 13, 1, 10, 34, 11};

    // calculate its size
    int n = sizeof(arr) / sizeof(arr[0]);

    // call the function and pass the address of the first element of the array and its size
    print3largest(arr, n);

    return 0;
}