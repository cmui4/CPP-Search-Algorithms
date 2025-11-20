/*
 * InsertionSort.cc
 *
 *  Created on: Nov 12, 2025
 *      Author: rlavel01
 */

#include "myheaders.h"
//#include <iostream>

void InsertionSort(long arr[], int size){

	//sorts through each element of the array starting at the 1st element
	for(int i = 1, j ; i < size; i++){
		//stores the current element that is waiting to be put in array
		int tmp = arr[i];
		//testing for outer loop interation
		//cout << "outer loop iteration: " << i << " : " << tmp << endl;

		//shifts the already sorted element to the right, does this until the appropriate position of tmp is found
		for(j = i; j > 0 && tmp < arr[j-1]; j--){

			arr[j] = arr[j - 1];
		}

		//puts tmp into the correct position of the array after being sorted
		//testing for inner loop iterations
		//cout << "inner loop iteration: " << j << " : " << arr[j] << endl;
		arr[j] = tmp;
	}
}


