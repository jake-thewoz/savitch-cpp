#include<iostream>
using namespace std;

int main()
{
	int quarters, dimes, nickels, pennies;
	cout << "Enter the number of quarters:\n";
	cin >> quarters;
	cout << "Enter the number of dimes:\n";
	cin >> dimes;
	cout << "Enter the number of nickels:\n";
	cin >> nickels;
	cout << "Enter the number of pennies:\n";
	cin >> pennies;

	int cents, dollars;
	cents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

	if (cents >= 100)
	{
		dollars = cents / 100;
		cents = cents % 100;

		cout << "The amount is $" << dollars << "." << cents << "\n";	
	} 
	else
	{
		cout << "The amount is " << cents << " cents.\n";
	}

	return 0;
}
