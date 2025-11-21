/*
 * CountingSort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: rlavel01
 */

#include "myheaders.h"

//reworked to account for negative values and positive values
 void	CountingSort(long	arr[],	int	size)	{

	long i;
	long j;
	long *tmp =	new	long[size];

	//finding the initial largest value
	long largest = arr[0];
	for	(i =	1;	i	<	size;	i++)
		if	(largest < arr[i])
			largest	= arr[i];

	//finding the initial smallest value
	long smallest = arr[0];
	for(j = 1; j < size; j++)
		if(smallest > arr[j])
			smallest = arr[j];

	long range = largest - smallest + 1; //declares the range

	//allocate the counting array
	unsigned long *count = new unsigned long[range];
	for(i = 0;	i < range; i++)
		count[i] = 0;

	//counts numbers in the data array
	for	(i = 0; i <	size; i++)
		count[arr[i] - smallest]++;

	for	(i = 1;	i < range; i++)	//count numbers	= i;
		count[i] += count[i-1];


	for	(i = size - 1; i >= 0; i--){		//put numbers in order in tmp[];
		long val = arr[i];
		count[val - smallest]--;
		tmp[count[val - smallest]] = val;

		//commented out equations from the book
		//tmp[count[arr[i]]-1]	=	arr[i];
		//count[arr[i]]--;
	}
	for	(i = 0;i < size; i++)	//transfer numbers from	tmp[]
		arr[i]	= tmp[i];	//to the original array;

}
