#include <iostream>
using namespace std;
int main_1()
{
	float rad;
	const float PI = 3.14159F;
	cout << "Vvedite radius okruznosti: ";
	cin >> rad;
	float area = PI * rad * rad;
	cout << "Ploshad kruga ravna: " << area << endl;
	return 0;
}