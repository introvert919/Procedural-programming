#include <iostream>
using namespace std;

/*
�������� ���������, ������� ������� ������� �������� �� ���� ���������� �� ������,
� ��������� ��������, ��������� � ���� ���������
������� ��������	��������� ������
90 <= ������ <= 100	'A'
80 <= ������ < 90	'B'
70 <= ������ < 80	'C'
60 <= ������ < 70	'D'
0 <= ������ < 60	'F'
��� �������� ��������� � ��������� �� 0 �� 100.
��� ������������� ��������� ������� ������������� �������� ��� ��������, ����������� 100.
*/
/* Write a program that outputs the average of the three points given to it,
and the letter value associated with this value
Average Value Letter grade
90 <= score <= 100 'A'
80 <= score < 90 'B'
70 <= score < 80 'C'
60 <= score < 70 'D'
0 <= score < 60 'F'
All values are in the range from 0 to 100.
There is no need to check for negative values or values greater than 100. */

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c, aver;
	cout << "������� ������ ���� = " << endl;
	cin >> a;
	cout << "������� ������ ���� = " << endl;
	cin >> b;
	cout << "������� ������ ���� = " << endl;
	cin >> c;

	aver = (a + b + c) / 3;
	cout << "������� �������� =" << aver << endl;

	if (aver >= 90 && aver <= 100)
	{
		cout << "A" << endl;
	}
	if (aver >= 80 && aver <= 90)
	{
		cout << "B" << endl;
	}
	if (aver >= 70 && aver <= 80)
	{
		cout << "C" << endl;
	}
	if (aver >= 60 && aver <= 70)
	{
		cout << "D" << endl;
	}
	if (aver >= 0 && aver <= 60)
	{
		cout << "E" << endl;
	}
	return 0;
}