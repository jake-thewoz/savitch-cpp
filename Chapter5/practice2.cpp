/*
 * This program translates feet and inches into
 * meters and centimeters.
 *
 * There are 0.3048 meters in a foot.
 *
 * Input: feet and inches
 * Output: meters and centimeters
 */

#include<iostream>
using namespace std;

const double METERS_IN_FOOT(0.3048);

void getInput(double& feet, double& inches);
// Prompts user for feet and inches and stores them
// in the variables

void findMeters(double feet, double inches, double& meters, double& cmeters);
// Takes in feet and inches, calculates values,
// and stores them in meters and cmeters variables

void printResults(double feet, double inches, double meters, double cmeters);
// Prints the results of the calculation

int main()
{
	double feet, inches, meters, cmeters, tInches, tCmeters;
	char goAgain('y');

	cout << "This program translates feet to meters.\n";

	while(goAgain == 'y' | goAgain == 'Y')
	{
		getInput(feet, inches);

		findMeters(feet, inches, meters, cmeters);

		printResults(feet, inches, meters, cmeters);

		cout << "Would you like to go again? (y|n)\n";
		cin >> goAgain;
	}
	return 0;
}

void getInput(double& feet, double& inches)
{
	cout << "Enter some feet:\n";
	cin >> feet;
	
	cout << "Enter some inches:\n";
	cin >> inches;
}

void findMeters(double feet, double inches, double& meters, double& cmeters)
{
	inches += (feet * 12.0);
	cmeters = inches * METERS_IN_FOOT * (100/12.0);

	meters = cmeters / 100;
	meters = static_cast<int>(meters);

	cmeters -= (meters * 100);
}

void printResults(double feet, double inches, double meters, double cmeters)
{
	cout << "Results:\n" << feet << " feet and " << inches << " inches equals\n"
		<< meters << " meters and " << cmeters << " centimeters.\n";
}
