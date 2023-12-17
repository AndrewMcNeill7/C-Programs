//=======================================================================
// array_exercise.cpp
//=======================================================================
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int getArray(int array[], int ARRAYSIZE);
void printArray(int array[],int ARRAYSIZE);
void arrayOddAverage(int array[], int ARRAYSIZE);
void arrayEvenAverage(int array[], int ARRAYSIZE);

int main() {
	const int ARRAYSIZE = 10;
	int pickedNumbers[ARRAYSIZE];
	
	
	getArray(pickedNumbers, ARRAYSIZE);
	printArray(pickedNumbers,ARRAYSIZE);
	arrayOddAverage(pickedNumbers, ARRAYSIZE);
	arrayEvenAverage(pickedNumbers, ARRAYSIZE);
	
	return (0);
}
int getArray(int array[], int ARRAYSIZE)
{
	printf("Enter Values For The Array\n");
	\
	for (int a = 0; a < ARRAYSIZE; a++)
	{
		cin >> array[a];
	}
	
	return array[ARRAYSIZE];
}

void printArray(int array[], int ARRAYSIZE)
{
	printf("\nList The Array Elements\n");
	
	for (int a = 0; a < ARRAYSIZE; a++)
	{
		cout << "Array[" << a << "] = "<< array[a] << endl;
	}
}

void arrayOddAverage(int array[], int ARRAYSIZE)
{
	double oddTally = 0;
	for(int a = 1; a < ARRAYSIZE; a+=2)
	{
		oddTally += array[a];
	}
	cout << "The Average of The Odd Elements is " << (oddTally / (ARRAYSIZE/2)) << endl;
}

void arrayEvenAverage(int array[], int ARRAYSIZE)
{
	double evenTally = 0;	
	for(int a = 0; a < ARRAYSIZE; a+=2)
	{
		evenTally += array[a];
	}
	cout << "The Average of The Even Elements is " << (evenTally / (ARRAYSIZE/2)) << endl;
	
}
	