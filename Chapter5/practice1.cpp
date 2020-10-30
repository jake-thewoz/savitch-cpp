/*
*	This program computes the average and standard
*	deviation of four input scores.
*
*	To find the standard devaition:
*		1. Compute the average
*		2. For each score, find the difference from the average
*			and square it
*		3. Add together all of the results from step 2, then
*			find the square root. This is the SD
*
*	Input: four scores
*	Output: average and SD
*/

#include<iostream>
#include<cmath>
using namespace std;

void getInput(double& s1, double& s2, double& s3, double& s4);
// Prints prompt to user and stores data in the variables

double findAverage(double s1, double s2, double s3, double s4);
// Takes variables and returns their average

double getSquaredDifference(double score, double average);
// Takes two variables and returns their squared difference

double findSD(double s1, double s2, double s3, double s4, double average);
// Takes in all the variables and computes the sd, using
// getSquaredDifference()

void printResults(double average, double sd);
// Takes the average and sd and prints them to the user

int main()
{
	double s1, s2, s3, s4, avg, sd;
	char goAgain('y');

	cout << "Welcome to the standard deviation calculator.\n";

	while (goAgain == 'y' | goAgain == 'Y')
	{
		getInput(s1, s2, s3, s4);

		avg = findAverage(s1, s2, s3, s4);

		sd = findSD(s1, s2, s3, s4, avg);

		printResults(avg, sd);

		cout << "Would you like to run this again? (y|n)\n";
		cin >> goAgain;
	}
	return 0;
}

void getInput(double& s1, double& s2, double& s3, double& s4)
{
	cout << "Enter the first score:\n";
	cin >> s1;

	cout << "Enter the second score:\n";
	cin >> s2;
	
	cout << "Enter the third score:\n";
	cin >> s3;

	cout << "Enter the fourth score:\n";
	cin >> s4;
}

double findAverage(double s1, double s2, double s3, double s4)
{
	double average;
	average = (s1 + s2 + s3 + s4) / 4.0;

	return average;
}

double getSquaredDifference(double score, double average)
{
	double squaredDif;

	squaredDif = (average - score) * (average - score);

	return squaredDif;
}

double findSD(double s1, double s2, double s3, double s4, double average)
{
	double sd;

	sd = sqrt(getSquaredDifference(s1, average) + getSquaredDifference(s2, average) + getSquaredDifference(s3, average) + getSquaredDifference(s4, average));

	return sd;
}

void printResults(double average, double sd)
{
	cout << "The average was " << average
		<< " and the sd was " << sd << endl;
}
