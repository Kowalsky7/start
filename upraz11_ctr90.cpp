//using setw() with setiosflags(ios::left)
#include <iostream>
#include <iomanip> // for using setw()
using namespace std;
int main()
{
	cout << setw(15) << setiosflags(ios::left) << "Family " << setw(15) << setiosflags(ios::left) << "Name " << setw(15) << setiosflags(ios::left) << "Address " << setw(20) << setiosflags(ios::left) << "City " << endl
		<< "--------------------------------------------------------------" << endl
<< setw(15) << setiosflags(ios::left) << "Petrov " << setw(15) << setiosflags(ios::left) << "Vasilii " << setw(15) << setiosflags(ios::left) << "Klenovay 16 " << setw(20) << setiosflags(ios::left) << "Saint Petersburg " << endl
<< setw(15) << setiosflags(ios::left) << "Ivanov " << setw(15) << setiosflags(ios::left) << "Sergey " << setw(15) << setiosflags(ios::left) << "Osinovay 3 " << setw(20) << setiosflags(ios::left) << "Nachodka " << endl
<< setw(15) << setiosflags(ios::left) << "Sidorov " << setw(15) << setiosflags(ios::left) << "Ivan " << setw(15) << setiosflags(ios::left) << "Berezovay 21 " << setw(20) << setiosflags(ios::left) << "Kaliningrad " << endl;
return 0;
}
