#include <iostream>
using namespace std;

// receives arr, current iteration index, and size of the array
void max_heapify(int arr[], int index, int size){
  int largest = index;        // node which will be heapified
  int left = 2 * index + 1;   // left child node
  int right = 2 * index + 2;  // right child node

  // check left-child node against the largest node
  if (left < size && arr[left] > arr[largest]){
    largest = left;
  }

  // check right-child node against the largest node
  if (right < size && arr[right] > arr[largest]){
    largest = right;
  }
  
  if (largest != index){

    // using swap method from the standard library
    swap(arr[index], arr[largest]);

    // called recursively on the new largest node
    max_heapify(arr, largest, size);
  }
}


void heapSort(int arr[], int size){

  for (int i = size / 2-1; i>= 0; i--){
    max_heapify(arr, i, size);
  }

  for (int i = size-1; i>0; i--){
    swap(arr[0], arr[i]);
    max_heapify(arr, 0, i);
  }
}

// testing the implementation
int main(){
  int arr[10] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout<<"The input array is: "<<endl;
  for (int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  // building max heap data structure from the input array using max_heapify method
  heapSort(arr, size);

  cout<<"The max heap is: "<<endl;
  for (int i=0; i<size; ++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}
