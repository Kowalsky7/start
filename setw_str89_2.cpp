// using setw
#include <iostream>
#include <iomanip> // for using setw()
using namespace std;
int main()
{
	// 2 column by 4 rows 
	cout << setw(4) << "1990 " << setw(10) << "135" << endl 
		<< setw(4) << "1991 " << setw(10) << "7290" << endl
		<< setw(4) << "1992 " << setw(10) << "11300" << endl
		<< setw(4) << "1993 " << setw(10) << "16200" << endl;
	return 0;
}