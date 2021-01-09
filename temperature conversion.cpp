// conversion of temperature from Celsius to Fahrenheit
#include <iostream>
using namespace std;
int main()
{
	double c, f;
	cout << "Enter degrees Celsius: "; //input number degrees Celsius
	cin >> c; 
	f = c * 9 / 5 + 32; 
	cout << c << " degrees Celsius equals " << f << " degrees Fahrenheit"; // output phrase on the display
	return 0;
}