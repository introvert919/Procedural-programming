#include <iostream>;
using namespace std;

/* Напишите программу, которая выводит на экран линию из символов, вертикальную или горизонтальную.
   Символ, длинну линии и тип линии, задает пользователь. */
   /* Write a program that displays a line of characters, vertical or horizontal.
	The symbol, line length, and line type are set by the user. */

int main()
{
	setlocale(LC_ALL, "RUS");

	int linetype, length;
	int i = 0;
	char symboltype;
	cout << "Введите символ" << endl;
	cin >> symboltype;
	cout << "Введите тип линии, 1-вертикальная, 2-горизонтальная" << endl;
	cin >> linetype;

	cout << "Введите длинну линии" << endl;
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
