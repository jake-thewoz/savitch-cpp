#include<iostream>
using namespace std;

int main()
{
	int time, acceleration, distance;
	acceleration = 32;
	cout << "This program calculates how far an object would fall\n" <<
		"in the given time in seconds provided by the user.\n";
	cout << "Please enter a time in seconds:\n";
	cin >> time;

	distance = ((time * time) * acceleration) / 2;

	cout << "The object, falling for " << time << " seconds, would\n" <<
		"fall a total of " << distance << " feet.\n";


	return 0;
}
