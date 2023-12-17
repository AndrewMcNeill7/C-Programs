#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>
using namespace std;
void printArray(int array[], int size);
void printReverseArray(int array[], int size);
int printMin(int a[], int asize);
int printMax(int a[], int asize);
int genRand(int min, int max);

int main() {
    int nRANDS = 20;
    int arr[nRANDS];
	int minValue = 0;
	int maxValue = 0;

    //seed to create diff seq of random nums on each run
    srand(time(0));  //current time as seed

    for (int i = 0; i < nRANDS; i++)
	{
        arr[i] = genRand(0,100);
	}
	
	//OUTPUT STATEMENTS
	printArray(arr, nRANDS);
	minValue = printMin(arr, nRANDS);
	printf("\nThe Smallest Value in The Array is = %d\n", minValue);
	maxValue = printMax(arr, nRANDS);
	printf("The Largest Value in The Array is = %d\n", maxValue);
	printReverseArray(arr, nRANDS);
    printf("\n\n");
    return(0);
}

void printArray(int array[], int size)
{
	cout << "The Auto Generated Array is As Follows" << endl;
	for(int i = 0; i < size; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
}

void printReverseArray(int array[], int size)
{
	cout << endl << "The Original Array But in Reverse Order is As Follows" << endl;
	for(int i = (size - 1) ; i >= 0; i--)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
}

int printMin(int a[], int asize)
{
    int amin = a[0];
    for (int i = 0; i < asize; i++) {
        if (a[i] < amin)
            amin =  a[i];
    }
    return amin;
}


int printMax(int a[], int asize)
{
    int amax = a[0];
    for (int i = 0; i < asize; i++) {
        if (a[i] > amax)
            amax =  a[i];
    }
    return amax;
}


int genRand(int min, int max) 
{
    int random;
    random = rand();
	random = min + rand()%(max-min+1);
    return random;
}
