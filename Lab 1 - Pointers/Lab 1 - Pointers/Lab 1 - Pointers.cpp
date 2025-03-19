/*
* Vic Cuatico
* 400 507 885
* 
* Lab Report 1
* Question 1
*/

#include <iostream>
using namespace std;

int* ArrayAllocator(int size);
int FunctionMode(int* arr, int size, int* val);

int main()
{
	int size, val, frequency;
	const int min = 0, max = 9;

	//Do while loop to input a valid array size
	do
	{
		cout << "Enter the size of an array (5-50): ";
		cin >> size;
	} while (size < 5 or size > 50);

	//Call array allocator function
	int *arr = ArrayAllocator(size);

	//Random integers with the seed of 6000
	srand(6000);
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % (max - min + 1) + min;
		cout << *(arr + i) << " ";
	}
	cout << endl << endl;

	//Call funtion mode to find frequency of an integer
	frequency = FunctionMode(arr, size, &val);

	if (frequency != -1)
	{
		cout << "Frequency: " << frequency << endl;
		cout << "Value: " << val << endl;
	}

	else
	{
		cout << "There is no mode for this array." << endl;
	}

	return 0;
}

int* ArrayAllocator(int size)
{
	//Create and return the new array
	int* ptr = new int[size];

	return ptr;
}

int FunctionMode(int* arr, int size, int* val)
{
	int count, highcount = 0;

	//Loop for the possible integers in the array
	for (int i = 0; i <= 9; i++)
	{
		count = 0;

		//Loop to count how many times integer i appears in the array
		for (int j = 0; j < size; j++)
		{
			if (*(arr + j) == i)
			{
				count++;
			}
		}

		//If the count for that integer is higher than the previous, replace the frequency
		if (count > highcount)
		{
			highcount = count;
			*val = i;
		}
	}

	//If an integer appears more than once, return that frequency
	if (highcount > 1)
	{
		return highcount;
	}

	//If an integer does not appear more than once, return -1
	else
	{
		return -1;
	}
}