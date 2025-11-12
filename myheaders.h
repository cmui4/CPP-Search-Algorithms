// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
//#define MAXSIZE	 2100000
#define MAXSIZE 100 //change MAXSIZE just for testing purposes, added a test text file of 100 numbers


using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);

void InsertionSort(long arr[], int size);
