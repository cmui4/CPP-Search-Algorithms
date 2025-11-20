/*
 * BubbleSort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: cmui4
 */

#include "myheaders.h"

void BubbleSort(long arr[], int size) {
    bool swapped;

    // Outer loop runs size-1 times
    for (int i = 0; i < size - 1; i++) {
        swapped = false;

        // Inner loop compares adjacent elements
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // uses your swap(long&, long&)
                swapped = true;
            }
        }

        // Optimization: if no swap was made, array is already sorted
        if (!swapped) break;
    }
}



