#include<iostream>
using namespace std;

/* Напишите программу, которая выводит на экран число от 0 до 9 прописью.
Ввод :: 1
Результат :: "Один".
Попробуйте использовать цикл switch, если ваш язык поддерживает этот цикл. */
/* Write a program that displays a number from 0 to 9 in words.
Input :: 1
Result :: "One".
Try using a switch loop if your language supports this loop. */

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите число" << endl;
	cin >> a;

	switch (a)
	{
	case 0:
		cout << "Ноль" << endl;
		break;
	case 1:
		cout << "Один" << endl;
		break;
	case 2:
		cout << "Два" << endl;
		break;
	case 3:
		cout << "Три" << endl;
		break;
	case 4:
		cout << "Четыре" << endl;
		break;
	case 5:
		cout << "Пять" << endl;
		break;
	case 6:
		cout << "Шесть" << endl;
		break;
	case 7:
		cout << "Семь" << endl;
		break;
	case 8:
		cout << "Восемь" << endl;
		break;
	case 9:
		cout << "Девять" << endl;
		break;

	default:
		cout << "Ошибка";
	}
	return 0;
}
