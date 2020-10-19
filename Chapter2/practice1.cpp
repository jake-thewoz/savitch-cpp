/* This program takes the user input, which is
 * the weight of a box of cereal in ounces, and
 * outputs the weight in metric tons, as well as
 * how many boxes of the cereal would be needed
 * to make a metric ton of it.
 */

#include<iostream>
using namespace std;

int main()
{
	const double METRIC_TON = 35273.92;
	double cereal;
	char goAgain = 'y';

	while(goAgain == 'y' || goAgain == 'Y')
	{
		cout << "A metric ton is " << METRIC_TON << " ounces.\n";
		cout << "How much (in ounces) does your cereal box weigh:\n";
		cin >> cereal;

		cout << "Your cereal box weighs " << (cereal / METRIC_TON) << 
			" metric tons.\n" <<
			"In other words, it would take " << (METRIC_TON / cereal) <<
			" boxes of your cereal\nto make a metric ton.\n";

		cout << "Would you like to run this again? (y|n)\n";
		cin >> goAgain;
	}


	return 0;
}
