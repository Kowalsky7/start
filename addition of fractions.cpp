// addition of fractions
#include <iostream>
using namespace std;
int main()
{
	char dummychar = '/';
	int a, b, c, d, e, f;
	cout << "Enter the value of the first fraction: "; // input value of the first fraction
	cin >> a >> dummychar >> b;
	cout << "Enter the value of the second fraction: "; // input value of the second fraction
	cin >> c >> dummychar >> d;
	e = a * d + b * c;
	f = b * d;
	cout << "Fraction value: " << e << '/' << f;
	return 0;
}