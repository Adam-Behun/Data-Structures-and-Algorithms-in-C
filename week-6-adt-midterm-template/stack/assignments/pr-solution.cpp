#include <iostream>
using namespace std;

/* Find the second largest element in an array without sort 
This is my second solution using 1 loop  */

int secondLargestElement(int[], int);

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

    cout<<"The second largest element is: "<<secondLargestElement(arr, size)<<endl;

    return 0;
}

int secondLargestElement(int array[], int size){
    int max_ele = -99999;
    int second_largest_ele = -99999;
    for (int i=0 ; i<size ; i++){
        if (array[i] > max_ele){
            second_largest_ele = max_ele;
            max_ele = array[i];
        }
        else if(second_largest_ele < array[i] && array[i] != max_ele){
            second_largest_ele = array[i];
        }
    }
    return second_largest_ele;
}