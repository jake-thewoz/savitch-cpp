/*
 * This program takes an annual salary as input, and outputs the result of
 * a 7.6% raise, which is retroactive for 6 months.
 * This program will tell the employee:
 * 	1. Their new annual salary
 * 	2. Their new monthly salary
 * 	3. Their new bi-weekly paycheck (before tax)
 * 	4. The 'bonus' from the retroactive raise (before tax)
 */

#include<iostream>
using namespace std;

int main()
{
	const double RAISE(0.076);
	const int RETRO_MONTHS(6);

	double salary, newSalary, monthly, newMonthly, biweekly, newBiweekly, bonus;

	cout << "Congratulations! You've received a raise of " << (RAISE * 100) << "%!" << endl <<
		"This raise will retroactively apply to your previous " << RETRO_MONTHS << " months of work." << endl;

	char goAgain = 'y';

	while (goAgain == 'y' || goAgain == 'Y')
	{
		cout << "Please enter your current salary:" << endl;
		cin >> salary;

		newSalary = salary * (1 + RAISE);
		monthly = newSalary / 12;
		biweekly = newSalary / 26;
		bonus = (newSalary / (12 / RETRO_MONTHS)) - (salary / (12 / RETRO_MONTHS));

		cout << "Your new salary is: $" << newSalary << endl <<
			"Your new montly salary is: $" << monthly << endl <<
			"Your new biweekly salary is: $" << biweekly << endl <<
			"Your retroactive bonus is: $" << bonus << endl <<
			"Would you like to run this again? (y|n)" << endl;
		cin >> goAgain;
	}



	return 0;
}
