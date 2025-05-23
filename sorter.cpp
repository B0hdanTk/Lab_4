#include <iostream>


class Sorter {
     public:

     void bubbleSort(int arr[], int n) { 
          for (int i = 0; i < n - 1; ++i) {
               for (int j = 0; j < n - i - 1; ++j) {
                    if (arr[j] > arr[j + 1]) { 
                         swap(arr[j], arr[j + 1]);
                    }
               }
          }
     }


     void insertionSort(int arr[], int n) { 
          for (int i = 1; i < n; ++i) {
               int key = arr[i];
               int j = i - 1;
               while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    --j;
               }
               arr[j + 1] = key;
          }
    }


     void mergeSort(int arr[], int n) { 
          mergeSortHelper(arr, 0, n - 1);
     }


     void quickSort(int arr[], int n) { 
          quickSortHelper(arr, 0, n - 1);
     }

     private:

     void swap(int& a, int& b) {
          int temp = a;
          a = b;
          b = temp;
     }


     void mergeSortHelper(int arr[], int left, int right) {
          if (left >= right) {
               return;
          }
          int mid = (left + right) / 2;
          mergeSortHelper(arr, left, mid);
          mergeSortHelper(arr, mid + 1, right);
          merge(arr, left, mid, right);
     }


     void merge(int arr[], int left, int mid, int right) {
          const int MAX = 100;
          int temp[MAX];
          int i = left;
          int j = mid + 1;
          int k = 0;

          while (i <= mid && j <= right) {
               if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
               }
               else {
                    temp[k++] = arr[j++];
               }
          }

          while (i <= mid) {
               temp[k++] = arr[i++];
          }

          while (j <= right) {
               temp[k++] = arr[j++];
          }

          for (int m = 0; m < k; ++m) {
               arr[left + m] = temp[m];
          }
     }



     void quickSortHelper(int arr[], int low, int high) {
          if (low < high) {
               int pi = partition(arr, low, high);
               quickSortHelper(arr, low, pi - 1);
               quickSortHelper(arr, pi + 1, high);
          }
     }


     int partition(int arr[], int low, int high) {
          int pivot = arr[high];
          int i = low - 1;

          for (int j = low; j < high; ++j) {
               if (arr[j] <= pivot) {
                    ++i;
                    swap(arr[i], arr[j]);
               }
          }

          swap(arr[i + 1], arr[high]);
          return i + 1;
     }

};