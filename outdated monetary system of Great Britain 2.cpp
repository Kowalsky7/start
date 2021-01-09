// outdated monetary system of Great Britain 2
#include <iostream>
using namespace std;
int main()
{
	int s, p; // s-shilling, p-penny
	float decpounds; // amount in decimal pounds
	int pounds; // amount in old pounds
	float decfrac; // decimal fraction
	cout << "Enter number of decimal pounds: " << endl;
	cin >> decpounds; // input number of decimal pounds
	pounds = (int)decpounds; // discarding fractional part
	decfrac = decpounds - pounds; // fractional eddition
	s = decfrac * 20; // number of shilling
	p = decfrac * (12 / 2.4); // number of penny
	cout << "Equivalent amount in the old notation: " << pounds << '.' << s << '.' << p << endl;
	return 0;
}