/*
 * This program calculates the miles per gallon of a car.
 *
 * The input is:
 * 	1. The number of liters of gasoline consumed
 * 	2. The number of miles the car has travelled
 *
 * The output is:
 * 	The miles per gallon (a liter is 0.264179 gallons)
 */

#include<iostream>
using namespace std;

int main()
{
	double LITER_RATIO(0.264179), litersUsed, milesTravelled,
	       milesPerGallon;

	char goAgain('y');

	while(goAgain == 'y' || goAgain == 'Y')
	{
		cout << "Please enter the number of liters used:\n";
		cin >> litersUsed;
		cout << "Please enter the miles travelled:\n";
		cin >> milesTravelled;

		milesPerGallon = milesTravelled / (litersUsed * LITER_RATIO);

		cout << "You attained " << milesPerGallon << " miles per gallon.\n";
		cout << "Would you like to go again? (y|n)\n";
		cin >> goAgain;
	}

	return 0;
}
