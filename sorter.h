#ifndef SORTER_H
#define SORTER_H

class Sorter {
     public:
     void bubbleSort(int arr[], int n);
     void insertionSort(int arr[], int n);
     void mergeSort(int arr[], int n);
     void quickSort(int arr[], int n);

     private:
     void swap(int& a, int& b);
     void mergeSortHelper(int arr[], int left, int right);
     void merge(int arr[], int left, int mid, int right);
     void quickSortHelper(int arr[], int low, int high);
     int partition(int arr[], int low, int high);
};

#endif
