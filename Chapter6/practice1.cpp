/*
 * This program searches through a file, which contains
 * only numbers in the form of ints, and then prints the
 * largest and smallest numbers to the screen.
 *
 * I'll use a file I've made called 'numbers.txt', which should
 * be stored in the same directory as the object file.
 */

#include<iostream>
#include<fstream> // For file streaming
#include<cstdlib> // For the exit() function
#include<cctype>  // For isspace() function

// This may not be the most efficient way to do this, but I like
// the idea of breaking up the 'smallest()' and 'largest()' functions
// for clarity.

void findSmallest(int& smallest, std::ifstream& file);
// Takes an int and an instream file, and returns
// the smallest int in the variable given.

void findLargest(int& largest, std::ifstream& file);
// Takes an int and an instream, and returns the largest
// int in the 'largest' variable.

int main()
{
	using namespace std;

	int smallest, largest;

	cout << "This program searches through a file called 'numbers.txt',\n"
		<< "and prints the smallest and largest integers.\n"
		<< "Feel free to edit numbers.txt for testing.\n";
	
	ifstream file;
	file.open("numbers.txt");
	if (file.fail())
	{
		cout << "The file (numbers.txt) failed to open.\n"
			<< "Please make sure there's a number.txt file in the\n"
			<< "current directory.\n";
		exit(1);
	}
	
	findSmallest(smallest, file);
	findLargest(largest, file);
	file.close();

	cout << "Smallest: " << smallest << endl << "Largest: " << largest << endl;

	return 0;
}


void findSmallest(int& smallest, std::ifstream& file)
{
	int next; // This will be used to iterate through the file
	
	file >> next;
	smallest = next;

	while(file >> next)
	{
		if (next < smallest)
			smallest = next;
	}
}


void findLargest(int& largest, std::ifstream& file)
{
	int next; // This will be used to iterate through the file
	
	file >> next;
	largest = next;

	while(file >> next)
	{
		if (next > largest)
			largest = next;
	}
}
