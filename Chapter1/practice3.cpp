#include <iostream>
using namespace std;
int main()
{
	int numberOfPods, peasPerPod, totalPeas;
	cout << "Hello. This program tests for dividing by zero.\n";
	cout << "If you enter zero for the peas per pod,\n";
	cout << "it should give you a float point exception.\n";
	cout << "Press return after entering a number.\n";
	cout << "Enter the number of pods:\n";
	cin >> numberOfPods;
	cout << "Enter the number of peas in a pod:\n";
	cin >> peasPerPod;
	totalPeas = numberOfPods / peasPerPod;
	cout << "If you have " << numberOfPods << " pea pods\n";
	cout << "and " << peasPerPod << " peas in each pod,\n";
	cout << "then you have " << totalPeas << " peas in the pods.\n";
	cout << "Goodbye.\n";

	return 0;

}
