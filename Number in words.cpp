#include<iostream>
using namespace std;

/* �������� ���������, ������� ������� �� ����� ����� �� 0 �� 9 ��������.
���� :: 1
��������� :: "����".
���������� ������������ ���� switch, ���� ��� ���� ������������ ���� ����. */
/* Write a program that displays a number from 0 to 9 in words.
Input :: 1
Result :: "One".
Try using a switch loop if your language supports this loop. */

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "������� �����" << endl;
	cin >> a;

	switch (a)
	{
	case 0:
		cout << "����" << endl;
		break;
	case 1:
		cout << "����" << endl;
		break;
	case 2:
		cout << "���" << endl;
		break;
	case 3:
		cout << "���" << endl;
		break;
	case 4:
		cout << "������" << endl;
		break;
	case 5:
		cout << "����" << endl;
		break;
	case 6:
		cout << "�����" << endl;
		break;
	case 7:
		cout << "����" << endl;
		break;
	case 8:
		cout << "������" << endl;
		break;
	case 9:
		cout << "������" << endl;
		break;

	default:
		cout << "������";
	}
	return 0;
}