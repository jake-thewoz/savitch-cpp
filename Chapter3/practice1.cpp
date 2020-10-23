/*
 * This is a rock, paper, scissors game!
 *
 * The user enters r, p, or s, and the computer generates one
 * randomly. The program will repeat as long as the user wants!
 */

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	char userHand, goAgain('y');
	int compHand;
	bool userWins, draw;

	cout << "Welcome to rock, paper, scissors!\n";

	while (goAgain == 'y' | goAgain == 'Y')
	{
		cout << "Enter r, p, or s:\n";
		cin >> userHand;
		userHand = tolower(userHand);

		// Now we need to use some kind of random tool to assign
		// an appropriate random answer for compHand
		compHand = rand() % 2;
		// compHand should now be a random int between 0 and 2.
		// 0 = r, 1 = p, 2 = s

		// Now we check the results with a switch case
		draw = false;
		switch (compHand)
		{
			case 0: // rock
				if (userHand == 'r')
					draw = true;
				else if (userHand == 'p')
					userWins = true;
				else
					userWins = false;
				break;
			case 1: // paper
				if (userHand == 'r')
					userWins = false;
				else if (userHand == 'p')
					draw = true;
				else
					userWins = true;
				break;
			default: // scissors (2)
				if (userHand == 'r')
					userWins = true;
				else if (userHand == 'p')
					userWins = false;
				else
					draw = true;
		}

		// Now we announce the winner

		if (draw)
			cout << "You and the computer picked " << userHand << "!\n" <<
				"It's a draw. Play again? (y|n)\n";
		else if (userWins)
			cout << "You win! It seems " << userHand << " was a good choice.\n" <<
				"Play again? (y|n)\n";
		else
			cout << "You lose! Too bad. Play again? (y|n)\n";

		cin >> goAgain;
	}

	return 0;
}
