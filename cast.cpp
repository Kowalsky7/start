//������ �� ��������� � ������������ �����������
#include <iostream>
using namespace std;
int main()
{
	int intVar = 1500000000; // 1 500 000 000
	intVar = (intVar * 10) / 10; // ������� ������� ���������
	cout << "znachenie intVar ravno " << intVar << endl; // �������� ���������
	intVar = 1500000000; // ���������� � ���� double
	intVar = (static_cast<double>(intVar) * 10) / 10;
	cout << "znachenie IntVar ravno " << intVar << endl; // ������ ���������
	return 0;
}