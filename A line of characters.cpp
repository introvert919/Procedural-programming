#include <iostream>;
using namespace std;

/* �������� ���������, ������� ������� �� ����� ����� �� ��������, ������������ ��� ��������������.
   ������, ������ ����� � ��� �����, ������ ������������. */
   /* Write a program that displays a line of characters, vertical or horizontal.
	The symbol, line length, and line type are set by the user. */

int main()
{
	setlocale(LC_ALL, "RUS");

	int linetype, length;
	int i = 0;
	char symboltype;
	cout << "������� ������" << endl;
	cin >> symboltype;
	cout << "������� ��� �����, 1-������������, 2-��������������" << endl;
	cin >> linetype;

	cout << "������� ������ �����" << endl;
	cin >> length;

	while (i < length)
	{
		if (linetype == 1)
		{
			cout << symboltype << endl;
		}
		if (linetype == 2)
		{
			cout << symboltype;
		}
		i++;
	}
}