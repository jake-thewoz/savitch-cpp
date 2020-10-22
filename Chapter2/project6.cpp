/*
 * This program calculates an hourly paycheck in a realistic manner.
 *
 * It takes as input:
 * 	1. The employee's hourly rate
 * 	2. The employee's worked hours
 *	3. The employee's amount of dependents
 *
 * The program outputs:
 * 	1. The gross pay
 * 	2. The amount witheld for each tax and deduction
 * 	3. The net pay
 *
 * There will be a few constant variables for social security tax,
 * federal tax income, state income, union dues per week, dependent
 * limit, and dependent witholding (if employee has more dependents
 * than the limit). 
 *
 * Special rules: overtime hours are any hours over 40 per two-week
 * period; overtime pay is also a constant variable.
 */

#include<iostream>
using namespace std;

int main()
{
	// First we'll start laying down the constants
	const double SSTAX(0.06), FEDTAX(0.14), STTAX(0.05),
	      UNION_DUES(10.00), DEPENDENT_PEN(35.00),
	      OVERTIME_LIMIT(40), OVERTIME_RATE(1.5); 

	const int DEPENDENT_LIMIT(2);

	// Now we'll create our other variables
	double hourlyRate, workedHours, grossPay, netPay,
	       fedTax, stTax, ssTax, otPay;
	int dependents;
	char goAgain('y');

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	while (goAgain == 'y' || goAgain == 'Y')
	{
		cout << "Enter the number of hours worked the past two weeks:" << endl;
		cin >> workedHours;
		cout << "Enter the hourly pay rate:" << endl;
		cin >> hourlyRate;
		cout << "Enter the number of dependents:" << endl;
		cin >> dependents;

		if (workedHours > (2 * OVERTIME_LIMIT))
		{
			otPay = (workedHours - (OVERTIME_LIMIT * 2)) * hourlyRate * OVERTIME_RATE;
			grossPay = otPay + (OVERTIME_LIMIT * 2 * hourlyRate);
		}
		else
		{
			grossPay = workedHours * hourlyRate;
			otPay = 0.0;
		}

		netPay = grossPay;

		ssTax = grossPay * SSTAX;
		fedTax = grossPay * FEDTAX;
		stTax = grossPay * STTAX;

		netPay = netPay - ssTax - fedTax - stTax;

		netPay -= UNION_DUES;

		cout << "Here is your biweekly paycheck calculation." << endl;

		if (otPay >= 0.01)
		{
			cout << "\tRegular Hours:\t\t" << (2 * OVERTIME_LIMIT) << endl <<
				"\tRegular Pay:\t\t$" << (2 * OVERTIME_LIMIT * hourlyRate) << endl;
			cout << "\tOvertime Hours:\t\t" << (workedHours -(2* OVERTIME_LIMIT)) << endl <<
				"\tOvertime Pay:\t\t$" << otPay << endl <<
				"\tGross Pay:\t\t$" << grossPay << endl;
		}
		else
		{
			cout << "\tHours Worked:\t\t" << workedHours << endl <<
				"\tHourly Pay:\t\t$" << grossPay << endl;
		}

		cout <<
			"\tSocial Security Tax:\t$(" << ssTax << ")\n" <<
			"\tFederal Income Tax:\t$(" << fedTax << ")\n" <<
			"\tState Income Tax:\t$(" << stTax << ")\n" <<
			"\tUnion Dues:\t\t$(" << UNION_DUES << ")\n";

		if (dependents > DEPENDENT_LIMIT)
		{
			netPay -= DEPENDENT_PEN;
			cout << "\tLess dependent penalty:\t$(" << DEPENDENT_PEN << ")\n";
		}

		cout << "\tNet Pay:\t\t$" << netPay << endl;

		cout << "Would you like to run this again? (y|n)" << endl;
		cin >> goAgain;
	}

	return 0;
}
