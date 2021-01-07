// использование библиотечной функции sqrt()
#include <iostream> // для cout и т.п.
#include <cmath> // для sqrt()
using namespace std;
int main()
{
	double number, answer; // аргументы типа double для функции sqrt()
	cout << "Vvedite chislo: " << endl; // ввод числа
	cin >> number;
	answer = sqrt(number); // извлечение корня
	cout << "Koren' raven = " << answer << endl; // вывод результата
	return 0;
}