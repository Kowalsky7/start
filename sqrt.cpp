// ������������� ������������ ������� sqrt()
#include <iostream> // ��� cout � �.�.
#include <cmath> // ��� sqrt()
using namespace std;
int main()
{
	double number, answer; // ��������� ���� double ��� ������� sqrt()
	cout << "Vvedite chislo: " << endl; // ���� �����
	cin >> number;
	answer = sqrt(number); // ���������� �����
	cout << "Koren' raven = " << answer << endl; // ����� ����������
	return 0;
}