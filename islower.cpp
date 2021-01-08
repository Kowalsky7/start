// islower() library function
#include <iostream>
#include <ctype.h> // for using islower()

using namespace std;

int main()
{
	char a;
	cout << "Enter character: "; // output phrase on the display
	cin >> a; // input character 
	cout << (islower(a) ? 0 : 1) << endl; // lowercase letter is 0; capital letter is 1
	return 0;
}
