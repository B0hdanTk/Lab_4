#include <iostream>
#include "sorter.h"

bool isSorted(int arr[], int n) {
     for (int i = 1; i < n; ++i) {
          if (arr[i - 1] > arr[i]) {
               return false;
          }
     }
     return true;
}

int main() {
     const int N = 10;
     int original[N] = {10, 3, 5, 7, 2, 9, 1, 6, 4, 8};
     int arr[N];
     Sorter sorter;

     // Bubble Sort
     for (int i = 0; i < N; ++i) arr[i] = original[i];
     sorter.bubbleSort(arr, N);
     std::cout << "Bubble Sort: " << (isSorted(arr, N) ? "OK" : "Fail") << std::endl;

     // Insertion Sort
     for (int i = 0; i < N; ++i) arr[i] = original[i];
     sorter.insertionSort(arr, N);
     std::cout << "Insertion Sort: " << (isSorted(arr, N) ? "OK" : "Fail") << std::endl;

     // Merge Sort
     for (int i = 0; i < N; ++i) arr[i] = original[i];
     sorter.mergeSort(arr, N);
     std::cout << "Merge Sort: " << (isSorted(arr, N) ? "OK" : "Fail") << std::endl;

     // Quick Sort
     for (int i = 0; i < N; ++i) arr[i] = original[i];
     sorter.quickSort(arr, N);
     std::cout << "Quick Sort: " << (isSorted(arr, N) ? "OK" : "Fail") << std::endl;

     return 0;
}
