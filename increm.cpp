// ���������� �������� �����������������
#include <iostream>
using namespace std;
int main_2()
{
	int count = 10;
	cout << "count= " << count << endl; // ����� ����� 10
	cout << "count= " << ++count << endl; // ����� ����� 11 (���������� ������)
	cout << "count= " << count << endl; // ����� ����� 11
	cout << "count= " << count++ << endl; // ����� ����� 11 (����������� ������)
	cout << "count= " << count << endl; // ����� ����� 12
	return 0;
}