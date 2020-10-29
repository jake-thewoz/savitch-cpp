/*
 * This program calculates the miles per gallon of two cars.
 *
 * The input is:
 * 	1. The number of liters of gasoline consumed
 * 	2. The number of miles the car has travelled
 * 	(repeat for 2nd car)
 *
 * The output is:
 * 	The miles per gallon (a liter is 0.264179 gallons)
 * 	for each car, and then declaring the car with the
 * 	highest mpg.
 */

#include<iostream>
using namespace std;

const double LITER_RATIO(0.264179);

double milesPerGallon(double liters, double miles);
// Computes the miles per gallon of a vehicle
// Input is liters used and miles driven

int main()
{
	double litersUsed1, milesTravelled1, litersUsed2, milesTravelled2,
	       car1mpg, car2mpg;

	char goAgain('y');

	cout << "This program calculates the miles per gallon for two cars.\n";

	while(goAgain == 'y' || goAgain == 'Y')
	{
		cout << "-- Car 1 --\n";
		cout << "Enter the number of liters used:\n";
		cin >> litersUsed1;
		cout << "Enter the miles travelled:\n";
		cin >> milesTravelled1;

		cout << "-- Car 2 --\n";
		cout << "Enter the number of liters used:\n";
		cin >> litersUsed2;
		cout << "Enter the miles travelled:\n";
		cin >> milesTravelled2;

		// Use milesPerGallon() to find each car's mpg
		car1mpg = milesPerGallon(litersUsed1, milesTravelled1);
		car2mpg = milesPerGallon(litersUsed2, milesTravelled2);

		// Then say which one was had higher mpg
		if (car1mpg == car2mpg)
		{
			cout << "Both cars had " << car1mpg << " miles per gallon.\n";
		}
		else if (car1mpg > car2mpg)
		{
			cout << "Car 1 had the higher mpg rate of " << car1mpg << endl << "and car 2 had the lower mpg of " << car2mpg << endl;
		}
		else
		{
			cout << "Car 2 had the higher mpg rate of " << car2mpg << endl << "and car 1 had the lower mpg of " << car1mpg << endl;
		}

		cout << "Would you like to go again? (y|n)\n";
		cin >> goAgain;
	}
	cout << "Thanks for using this calculator.\n";

	return 0;
}

double milesPerGallon(double liters, double miles)
{
	return (miles / (liters * LITER_RATIO));
}
