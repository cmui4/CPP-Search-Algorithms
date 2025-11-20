/*
 * QuickSort.cc
 *
 *  Created on: Nov 20, 2025
 *      Author: cmui4
 */

#include "myheaders.h"

static void quickSortHelper(long arr[], int low, int high) {
    if (low >= high) return;   // base case: 0 or 1 element

    int i = low;
    int j = high;
    long pivot = arr[low + (high - low) / 2];  // middle element as pivot

    // Partition step
    while (i <= j) {
        // Move i right until arr[i] >= pivot
        while (arr[i] < pivot) {
            i++;
        }
        // Move j left until arr[j] <= pivot
        while (arr[j] > pivot) {
            j--;
        }

        // Swap elements that are on the wrong side
        if (i <= j) {
            swap(arr[i], arr[j]);  // your helper swap(long&, long&)
            i++;
            j--;
        }
    }

    // Recursively sort the two partitions
    if (low < j) {
        quickSortHelper(arr, low, j);
    }
    if (i < high) {
        quickSortHelper(arr, i, high);
    }
}

// Public function matching your prototype
void QuickSort(long arr[], int size) {
    if (size <= 1) return; // already sorted
    quickSortHelper(arr, 0, size - 1);
}



