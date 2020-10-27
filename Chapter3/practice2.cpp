/*
 * This program calculates interest due, total amount due,
 * and minimum payment for a given account balance as input.
 *
 * The interest rate is 1.5% for the first $1,000, and 1% for 
 * amounts over $1,000.
 *
 * The minimum payment is the total amount if under $10, otherwise
 * it's max(10%, $10).
 */

#include<iostream>
using namespace std;

int main()
{
	double interestRate(0.015), minimum, interestDue, totalDue, currentBalance;
	char goAgain('y');

	while(goAgain == 'y' || goAgain == 'Y')
	{
		cout << "Please enter your account balance:\n";
		cin >> currentBalance;

		if (currentBalance <= 1000)
			interestRate = 0.015;
		else
			interestRate = 0.01;

		totalDue = currentBalance * (1 + interestRate);
		interestDue = currentBalance * interestRate;
		
		if (totalDue <= 10)
			minimum = totalDue;
		else if (totalDue * 0.1 > 10)
			minimum = (totalDue * 0.1);
		else
			minimum = 10;

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);

		cout << "Your total balance is: $" << totalDue << endl <<
			"Your minimum payment is: $" << minimum << endl;
		cout << "Would you like to run this again? (y|n)\n";
		cin >> goAgain;
	}
	return 0;
}

