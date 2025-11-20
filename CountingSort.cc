/*
 * CountingSort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: rlavel01
 */

#include "myheaders.h"

 void	CountingSort(long	arr[],	int	size)	{

	long i;

	//finding the initial largest value
	long largest = arr[0];
	for	(i =	1;	i	<	size;	i++)
		if	(largest < arr[i])
			largest	= arr[i];

	//allocate the counting array
	unsigned long *count = new unsigned long[largest+1];
	for	(i = 0;	i <= largest; i++)
		count[i] = 0;

	//counts numbers in the data array
	for	(i = 0; i <	size; i++)
		count[arr[i]]++;

	for	(i = 1;	i <= largest; i++)	//	count numbers	=	i;
		count[i] += count[i-1];

	long *tmp =	new	long[size];

	for	(i = size;i != -1; i--){		//		put numbers in order in	tmp[];
		tmp[count[arr[i]]-1]	=	arr[i];
		count[arr[i]]--;
	}
	for	(i = 0;i < size; i++)				//	transfer numbers from	tmp[]
		arr[i]	= tmp[i];//	to the original array;

}
