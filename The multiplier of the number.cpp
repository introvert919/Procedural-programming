#include<iostream>
using namespace std;

/*
�������� ���������, ������� ���������, �������� �� a ���������� b.
� ��������
��������� - ��� �����, ������� �� ������ �������� ���� �� �����, ����� �������� ������ �����.
2 � 3 �������� ����������� 6, ������ ���: 2 * 3 = 6
�� ������ ����� ���������, �������� �����. ���� ������� ����� 0, �� ����� �������� ����������.
�� ������ ������������ �������� mod (%) � ����������� ������ ��� �������� �������
��������, 2 �� �������� ������������� 7, ������ ���: 7 % 2 = 1
*/
/*
Write a program that checks if a is a multiplier of b.
About the factors
Multipliers are numbers that you can multiply by each other to get another number.
2 and 3 are multipliers of 6 because: 2 * 3 = 6
You can find the multiplier by dividing the numbers. If the remainder is 0, then the number is a multiplier.
You can use the mod (%) operator in most languages to check the remainder
For example, 2 is not a coefficient of 7 because: 7 % 2 = 1
*/

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cin >> b;
	cin >> a;
	bool(c) = true;
	c = b % a == 0;

	if (c)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
	return 0;
}