// using the setw and setfill manipulators
#include <iostream>
#include <iomanip> // for using the setw and setfill manipulators
using namespace std;
int main_2()
{
	long pop1 = 848052, pop2 = 748272, pop3 = 109284;
	cout << setw(6) << "City " << setw(16) << "Population " << setfill('.') << endl
		<< setw(6) << "Moscow " << setw(12) << pop1 << setfill('.') << endl
		<< setw(6) << "London " << setw(12) << pop2 << setfill('.') << endl
		<< setw(6) << "Napoli " << setw(12) << pop3 << setfill('.') << endl;
		return 0;
}