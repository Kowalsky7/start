//работа со знаковыми и беззнаковыми переменными
#include <iostream>
using namespace std;
int main()
{
	int intVar = 1500000000; // 1 500 000 000
	intVar = (intVar * 10) / 10; // слишком большой результат
	cout << "znachenie intVar ravno " << intVar << endl; // неверный результат
	intVar = 1500000000; // приведение к типу double
	intVar = (static_cast<double>(intVar) * 10) / 10;
	cout << "znachenie IntVar ravno " << intVar << endl; // верный результат
	return 0;
}