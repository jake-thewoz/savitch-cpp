/*
 * This program takes a speed in mph as input,
 * and produces the pace-per-mile in minutes
 * and seconds as output.
 */

#include<iostream>
using namespace std;

int main()
{
	double mph, seconds;
	int minutes;

	cout << "Please enter a speed in mph, and we will convert" << endl <<
		"it into a mile pace:" << endl;
	cin >> mph;

	// First, let's figure out how many seconds per mile.
	// For 10 mph, that would be 3600 / 10.
	seconds = 3600 / mph;

	// Then we'll express this in minutes and seconds.
	minutes = (int)seconds / 60;

	// Finally, we'll subtract out the minutes from the seconds.
	seconds -= (minutes * 60);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	cout << "The mile pace is " << minutes << " minutes and " << seconds << " seconds." << endl;

	return 0;
}
