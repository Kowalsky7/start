// gallons to cubic feet conversion
#include <iostream>
using namespace std;
int main()
{
	double g, cf; // g-gallons; cf-feet
	cout << "enter the number of gallons: "; // displaying the phrase on the screen
	cin >> g;
	cf = g * 7.481; // 1 cubic feet equal 7.481 gallons
	cout << g << " gallons equal(s) " << cf << " cubic feet"; // displaing the phrase on the screen
	return 0;
}