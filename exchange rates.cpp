// exchange rates
#include <iostream>
using namespace std;
int main()
{
	double p, d, f, dm, j; // p-pounds, d-dollars, f-francs, dm-deutsche mark, j-japanese yen
	cout << "Enter number of dollars: ";
	cin >> d; // input number of dollars
	p = 1.487 * d; // number of pounds
	f = 0.172 * d; //number of francs
	dm = 0.584 * d; //number of deutsche mark
	j = 0.00955 * d; //number of japanese yen
	// output number of rates on the display
	cout << d << " dollars equals " << p << " pounds" << endl
		<< d << " dollars equals " << f << " francs" << endl
		<< d << " dollars equals " << dm << " deutsche mark" << endl
		<< d << " dollars equals " << j << " japanese yen";
	return 0;
}