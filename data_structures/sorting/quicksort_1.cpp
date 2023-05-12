#include <iostream>
using namespace std;

// function declarations
void swap(int &a, int &b);
void quickSort(int arr[], int start, int end);
void display(int arr[], int size);

// testing the implementation
int main() {
  int arr[] = {10, 7, 8, 9, 1, 5, 7, 2, 1, 6, 8, 5, 3, 4};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout<<"Before sorting: "<<endl;
  display(arr, size);

  // passing first and last element of the array
  quickSort(arr, 0, size - 1);
  cout<<"After sorting: "<<endl;
  display(arr, size);

  return 0;
}

// display function
void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void quickSort(int arr[], int start, int end) {
  int left = start;
  int right = end;

  // check if begining index lower than end
  if (left >= right) {
    return;
  }

  // set pivot as the left-most ele of the array
  int pivot = arr[start];

  // create partitions part
  while (left < right) {

    // find the first ele from right that is smaller than pivot by decrementing right
    while (arr[right] > pivot) {
      right--;
    }

    // find the first ele from left that >= pivot by incrementing left
    while (arr[left] <= pivot) {
      left++;
    }

    // if left < right, swap them
    if (left < right) {
      swap(arr[left], arr[right]);
    }
  }
  
  // right index has the first ele that is smaller than pivot
  // this sets the pivot to the correct position
  swap(arr[start], arr[right]);

  // sort the array to the left of the pivot
  quickSort(arr, start, right - 1);

  // sort the array to the right of the pivot
  quickSort(arr, right + 1, end);
}

/* Lines 49 to 71 
1. Initialize a pivot point at the left-most element.
2. The top while loop creates partitions around the pivot with eles that are <= pivot on its left and all other eles on the pivot's right 
3. The first inner while loop decrements the index of right until it finds ele that is < pivot (it moves from right)
4. The second inner while loop increments the index of left until it finds ele that is >= pivot (it moves from left)
5. Left and right indeces now have the first ele (65, 66) from each side from each perspective and the first swap moves the element left if smaller than pivot and moves ele right if >= pivot
*/

/* Line 72 
After this swap, the pivot separates the whole array into two subarrays. It swaps pivot with the first ele of right partition.
*/

/* Why left < right 
This condition ensures that the partitioning continues until the left index is one iteration away from being the same as the right index. That means that the program have partitioned the whole array. 
*/