#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to the fence length calculator.\n";
	int width, height, totalLength;
	cout << "How long is your rectangle in feet?\n";
	cin >> width;
	cout << "How deep is your rectangle?\n";
	cin >> height;
	cout << "Your rectangle has an area of " << (height * width) <<
		" square feet,\n";
	cout << "and will require " << ((2 * height) + (2 * width)) <<
		" total feet of fence.\n";   

	return 0;

}
