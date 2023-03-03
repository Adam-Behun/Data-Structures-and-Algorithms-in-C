#include <iostream>
using namespace std;

/* Find the second largest element in an array without sort 
This is my first solution using 2 for loops where the first one finds the maximum
and the second one finds the second maximum*/

int secondLargest(int[], int);

int main(){
    int size;
    cout<<"What's the size of the array? "<<endl;
    cin>>size;
    int arr[size] = {0};
    cout<<"What are the elements of the array? "<<endl;
    for (int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<"Elements of the array"<<endl;
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The second largest element is "<<secondLargest(arr, size)<<endl;

    return 0;
}

int secondLargest(int arr[], int array_size){
    int max_ele = -99999;
    int second_largest_ele = -99999;

    for (int i=0 ; i<array_size ; i++){

        // store the max element seen in max_ele variable
        if (arr[i] >= max_ele){
            max_ele = arr[i];
        }
    }
    for (int i=0 ; i<array_size ; i++){
        if (arr[i] > second_largest_ele && arr[i] < max_ele){
            second_largest_ele = arr[i];
        }
    }
    return second_largest_ele;
}