/*
 * This program uses the Babylonian algorithm to comptue the square
 * root of a number 'n', as provided by the user.
 */

#include<iostream>
using namespace std;

int main()
{
	double n, r, guess, nGuess;
	bool closeEnough = false;

	cout << "This program computes an approximate square root " << endl <<
		"by the Babalonian algorithm." << endl <<
		"Please enter a number to compute:" << endl;
	cin >> n;

	// First, we guess at the answer
	guess = n / 2;

	while (!closeEnough)
	{
		// Second, we compute r = n / guess
		r = n / guess;

		// Third, we set guess = (guess + r) / 2
		nGuess = (guess + r) / 2;

		// Fourth, we return to step 2 and repeat 2 and 3 until
		// the new guess is within 1% of the previous guess
		// We do this by first checking if it's within 1%, and
		// if not, we return to step 2. If so, we exit the loop.
		if ((int)((nGuess * 100)+0.5) == (int)((guess * 100)+0.5))
			closeEnough = true;
		else
			guess = nGuess;
	}

	cout << "The computed square root is " << nGuess << endl;
	
	return 0;
}
