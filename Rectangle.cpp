#include<iostream>
using namespace std;

/* Напишите программу, которая выводит на экран прямоугольник в виде символа "*".
   Длинну и ширину задает пользователь. */
   /* Write a program that displays a rectangle in the form of a "*" character.
	The length and width are set by the user. */

int main()
{
	setlocale(LC_ALL, "ru");

	int length, width;

	cout << "Ââåäèòå äëèííó ïðÿìîóãîëüíèêà" << endl;
	cin >> length;
	cout << "Ââåäèòå øèðèíó ïðÿìîóãîëüíèêà" << endl;
	cin >> width;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
