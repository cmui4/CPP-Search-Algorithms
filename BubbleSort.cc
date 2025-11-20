/*
 * BubbleSort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: cmui4
 */

#include "myheaders.h"

void BubbleSort(long arr[], int size) {
    bool swapped;

    // the outer loop runs size-1 times
    for (int i = 0; i < size - 1; i++) {
        swapped = false;

        // then the inner loop compares adjacent elements
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // uses swap from helper
                swapped = true;
            }
        }

        // if no swap has been made, break
        if (!swapped) break;
    }
}



