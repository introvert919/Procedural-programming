#include <iostream>
using namespace std;

/*
Напишите программу, которая выводит среднее значение из трех переданных ей баллов,
и буквенное значение, связанное с этим значением
Среднее значение	Буквенная оценка
90 <= оценка <= 100	'A'
80 <= оценка < 90	'B'
70 <= оценка < 80	'C'
60 <= оценка < 70	'D'
0 <= оценка < 60	'F'
Все значения находятся в диапазоне от 0 до 100.
Нет необходимости проверять наличие отрицательных значений или значений, превышающих 100.
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
	cout << "Введите первый балл = " << endl;
	cin >> a;
	cout << "Введите второй балл = " << endl;
	cin >> b;
	cout << "Введите третий балл = " << endl;
	cin >> c;

	aver = (a + b + c) / 3;
	cout << "Среднее значение =" << aver << endl;

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