/*
 * This program has a function that has
 * Input: an array (and its size)
 * Output: boolean, true if either 1st or last
 *	int in the array is a 2
 */

#include<iostream>
using namespace std;

bool firstLast2(const int arr[], const int size);
// Takes an array of int
// Returns true if first or last element in array
//	is a 2

int main()
{
	int test1[] = {1,2,3,2};
	int test2[] = {1,2,3,4};
	int test3[] = {2,3,4,5};

	cout << "This program runs a digit test on internal arrays.\n"
		<< "The results should be 'true', 'false', true'.\n";

	cout << firstLast2(test1, 4) << endl;
	cout << firstLast2(test2, 4) << endl;
	cout << firstLast2(test3, 4) << endl;

	return 0;
}

bool firstLast2(const int arr[], const int size)
{
	for(int i = 0; i < size; i++)
	{
		if ((i == 0 && arr[i] == 2) || (i == (size - 1) && arr[i] == 2))
			return true;
	}

	return false;
}
