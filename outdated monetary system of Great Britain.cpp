// outdated monetary system of Great Britain
#include <iostream>
using namespace std;
int main()
{
	double pd, s, py, dp1, dp2; // p-pound, s-shilling, p-penny, dp- decimal pounds
	cout << "Enter number of pound(s): " << endl; // input number of pounds
	cin >> pd;
	cout << "Enter number of shilling(s): " << endl; // input number of pounds
	cin >> s;
	cout << "Enter number of penny: " << endl; // input number of penny
	cin >> py;
	dp1 = (s * 12 + py) / 240; // converting pounds to decimal pounds
	dp2 = pd + dp1; // decimal pounds
	cout << "Decimal pounds: " << dp2 << endl; //output number on the display
	return 0;
}