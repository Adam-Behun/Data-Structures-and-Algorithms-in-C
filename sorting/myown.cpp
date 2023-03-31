#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Forward function declarations
template <typename T> void my_sort(T arr[], int size);
template <typename T> void bubble_sort(T arr[], int size);
template <typename T> void swap(T* first, T* second);
template <typename T> void display(T arr[], int size);
template <typename T> bool is_sorted(T arr[], int size);

// Driver function
int main() {
    srand((unsigned)time(NULL));
    const int size = 150;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    }
    clock_t start = clock();
    my_sort(arr, size);
    clock_t end = clock();
    double my_sort_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    cout << "my_sort time: " << my_sort_time << endl;

    start = clock();
    bubble_sort(arr, size);
    end = clock();
    double bubble_sort_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    cout << "bubble_sort time: " << bubble_sort_time << endl;

    return 0;
}

// Function used to swap values
template <typename T>
void swap(T* first, T* second) {
    T temp = *first;
    *first = *second;
    *second = temp;
}

// my_sort takes in a T datatype array and an int size
template <typename T>
void my_sort(T arr[], int size) {
    bool is_sorted = false;
    for (int i = 0; i < size - 1 && !is_sorted; i++) {
        is_sorted = true;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                is_sorted = false;
            }
        }
    }
}

// Function used to check whether the array is sorted
template <typename T>
bool is_sorted(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function used to print the arrays
template <typename T>
void display(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T> void bubble_sort(T arr[], int size) {
  int i, j;

  // iterate from first to second-to-last
  for (i = 0; i < size - 1; i++) {

    // iterate from first to last
    for (j = 0; j < size - i - 1; j++) {

      // compare adjacent
      if (arr[j] > arr[j + 1]) {

        // if pass, then swap adjacent
        // and go inner loop again
        swap(arr + j, arr + j + 1);
      }
    }
  }
};