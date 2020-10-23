/*
 * This is a rock, paper, scissors game!
 *
 * The user enters r, p, or s, and the computer generates one
 * randomly. The program will repeat as long as the user wants!
 */

#include<iostream>
using namespace std;

int main()
{
	char userHand, compHand, goAgain('y');

	cout << "Welcome to rock, paper, scissors!\n";

	while (goAgain == 'y' | goAgain == 'Y')
	{
		cout << "Enter r, p, or s:\n";
		cin >> userHand;

		// Now we need to use some kind of random tool to assign
		// an appropriate random answer for compHand

		// Now we check the results with a switch case

		// Here we ask if the user wants to play again
	}

	return 0;
}
