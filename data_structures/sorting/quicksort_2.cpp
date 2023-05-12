#include <iostream>
using namespace std;

void quick_sort(int arr[], int start, int end);
void swap(int &a, int &b);
void display(int arr[], int size);

int main(){
  int arr[] = {10, 7, 8, 9, 1, 5, 7, 2, 1, 6, 8, 5, 3, 4};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout<<"Before sorting: "<<endl;
  display(arr, size);
  quick_sort(arr, 0, size -1);
  cout<<"After sorting: "<<endl;
  display(arr, size);

  return 0;
}

void display(int arr[], int size){
  for (int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void quick_sort(int arr[], int start, int end) {
    int left = start;
    int right = end;
    
    if (left >= right) {
        return;
    }

    // set pivot as right-most ele
    int pivot = arr[right];

    while (left < right) {

      // find first ele from left that is > pivot
      while (arr[left] < pivot) {
          left++;
      }

      // find first ele from right that is <= pivot
      while (arr[right] >= pivot) {
          right--;
      }

      // move the numbers to the correct position
      if (left < right) {
          swap(arr[left], arr[right]);
      }
  }
    
  // moves pivot to the right spot
  swap(arr[left], arr[end]);

  // sort the array to the left of pivot
  quick_sort(arr, start, left - 1);

  // sort the array to the right of pivot
  quick_sort(arr, left + 1, end);
}