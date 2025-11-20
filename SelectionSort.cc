/*
 * SelectionSort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: cmui4
*/
#include "myheaders.h"

void SelectionSort(long arr[], int size) {
    // the outer loop is positioned where we place the next smallest element
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;  // assume current position is the minimum

        // the inner loop find index of smallest element in the unsorted part
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        //then swap only if we found a smaller element
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);  // swap
        }
    }
}
