// Copyright (C) 2025 Sarvesh Kulkarni <sarvesh.kulkarni@villanova.edu>
// If you are a student in the ECE 2161 lab, you may use this code.
// Permission is NOT granted to use this code for non-educational purposes.
// Write code for bubble sort and merge sort and call the functions in main.

// WARNING! WARNING! WARNING!
//  This program declares *very* large arrays. If you have not increased your
//  stack space, expect a segmentation fault. In order to increase your
//  stack space, run the following command from your terminal:
//  ulimit -s 819200

#include <iostream>
#include <ctime>
#include "myheaders.h"

using namespace std;


int main() {
	
	int		choice, sz;
	long	data[MAXSIZE], wData[MAXSIZE];
	double  begin_time, end_time, cpu_time_used;
	string  ifilename, ofilename;
	
	while (1) {

		printmenu();
		cin >> choice;
		
		switch (choice) {

			case 1: // Read input file and store data in arrays data1 and data2
                    // The function 'readfile' returns the size of the file that was read
					// If the file could not be read, 'readfile' returns -1
				
					ifilename = "lab5_input.txt";
					sz = readfile(ifilename, data);
			
					if (sz < 0)	 {
						 cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
						 cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
						 return 0;
					}
					else cout << endl << "File size is: " << sz << endl;

					//printarray(data, sz);
			
					break;

			case 2: // Sort function A, Insertion Sort

                    // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
                    for(int k = 0; k < sz; k++){
                    	wData[k] = data[k];
                    }
                    
					begin_time = clock();   // start cpu timer
			
					// Call your Sort function A here to sort the array 'wData''
			        //  Note that 'wData' is of size 'sz' (see case 1).
					InsertionSort(wData, sz);
			
					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Insertion Sort ran for " << cpu_time_used << " secs.";
			
					ofilename = "lab5_InsertionSort_out.txt";
					//ofilename = "lab5_test.txt";

					writefile(wData, sz, ofilename);
					//printarray(wData, sz);
					
					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;
			
					break;

			case 3: // Sort function B
			
			        // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
					for(int k = 0; k < sz; k++){
						wData[k] = data[k];
					}



					begin_time = clock();   // start cpu timer
			
					// Call your Sort function B here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					//BubbleSort(wData, sz);

			
					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Bubble Sort ran for " << cpu_time_used << " secs.";
			
					ofilename = "lab5_BubbleSort_out.txt";
					writefile(wData, sz, ofilename);
					
					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;
			
					break;
					
			// Write the other cases 4 - 7 here		
			case 4: //Selection Sorting Algorithm

					//copy contents of data array to wData array
					for(int k = 0; k < sz; k++){
				        wData[k] = data[k];
				     }


					begin_time = clock();   // start cpu timer

					// Call your Sort function B here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					//SelectionSort(wData, sz);


					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Selection Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_SelectionSort_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						cerr << endl << "ERROR: Output File could not be opened." <<endl;
						cerr << "       Quitting Now!" << endl << endl;
						return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;
			case 5://Heap Sorting Algorithm

					//copy contents of data array to wData array
					for(int k = 0; k < sz; k++){
						wData[k] = data[k];
					 }


					begin_time = clock();   // start cpu timer

					// Call your Sort function B here to sort the array 'wData'
					//  Note that 'wDdata' is of size 'sz' (see case 1).
					//HeapSort(wData, sz);


					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Heap Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_HeapSort_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						cerr << endl << "ERROR: Output File could not be opened." <<endl;
						cerr << "       Quitting Now!" << endl << endl;
						return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;
			case 6: //Counting Sort Algorithm
					//copy contents of data array to wData array
					for(int b = 0; b < sz; b++){
						wData[b] = data[b];
					 }


					begin_time = clock();   // start cpu timer

					// Call your Sort function B here to sort the array 'wData'
					//  Note that 'wDdata' is of size 'sz' (see case 1).
					CountingSort(wData, sz);


					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Counting Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_CountingSort_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						cerr << endl << "ERROR: Output File could not be opened." <<endl;
						cerr << "       Quitting Now!" << endl << endl;
						return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;
			case 7: //Quicksort Algorithm
					//copy contents of data array to wData array
					for(int k = 0; k < sz; k++){
						wData[k] = data[k];
					 }


					begin_time = clock();   // start cpu timer

					// Call your Sort function B here to sort the array 'wData'
					//  Note that 'wDdata' is of size 'sz' (see case 1).
					//QuickSort(wData, sz);


					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Quick Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_QuickSort_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						cerr << endl << "ERROR: Output File could not be opened." <<endl;
						cerr << "       Quitting Now!" << endl << endl;
						return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;
			case 0: // Exit Program

					cout << endl << "Received program exit command - I QUIT!" << endl << endl;

					return 0;

			default: // Error in selection

					cout << endl << "Incorrect selection, try again from the menu below." << endl;

		} // switch

	} // while
	
	return 0;
}

