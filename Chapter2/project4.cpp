/*
 * This program caluclates figures for a 'discount installment loan'.
 *
 * It takes 3 inputs: 
 * 	1- the amount the customer needs to receive,
 * 	2- the interest rate,
 * 	3- and the duration in months of the loan.
 *
 * The program's output is: 
 * 	1- the true face value of the loan,
 * 	2- and the monthly payment.
 *
 * The loan works by multiplying the face value by the interest rate,
 * 	(ie $1,000 * 0.15) = 150
 * That interest figure is then multiplied by the loan period in years,
 * 	(ie 150 * 1.5 (18 months)) = 225
 * This interest value is immediately deducted from the face value,
 * resulting in the loan amount the consumer gets.
 * 	(ie $1,000 - 225 = 775)
 * To calculate the monthly payment, we divide the face value by the period
 * in months,
 * 	(ie 1,000 / 18 = 55.56)
 */

#include<iostream>
using namespace std;

int main()
{
	double loanValue, interestRate, period, faceValue, monthlyPayment;
	char goAgain('y');
	
	cout << "This program calculates figures for a discount installment loan." << endl << endl;

	while (goAgain == 'y' | goAgain == 'Y')
	{
		cout <<	"Enter the needed amount:" << endl;
		cin >> loanValue;
		cout << "Enter the interest rate in decimal form: (ie 7% = .07)" << endl;
		cin >> interestRate;
		cout << "Enter the period of the loan in months:" << endl;
		cin >> period;

		// Now we derive the faceValue from the loanValue
		faceValue = loanValue / (1 - (interestRate * (period / 12)));

		// Then we can calculate the monthly payment easily
		monthlyPayment = faceValue / period;

		// Because sometimes with very large numbers faceValue and monthlyPayment
		// can end up being negative, let's fix that. I'm using if statements
		// to avoid adding in the stdlib for only the abs() function
		if (faceValue < 0)
		{
			faceValue *= -1;
			monthlyPayment *= -1;
		}

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);

		cout << "Your total loan value is $" << faceValue << endl <<
			"and your monthly payment will be $" << monthlyPayment << endl <<
			"Would you like to run this again? (y|n)" << endl;

		cin >> goAgain;
	}

	return 0;
}
