// применение операции инкрементирования
#include <iostream>
using namespace std;
int main_2()
{
	int count = 10;
	cout << "count= " << count << endl; // вывод числа 10
	cout << "count= " << ++count << endl; // вывод числа 11 (префиксная запись)
	cout << "count= " << count << endl; // вывод числа 11
	cout << "count= " << count++ << endl; // вывод числа 11 (постфиксная запись)
	cout << "count= " << count << endl; // вывод числа 12
	return 0;
}