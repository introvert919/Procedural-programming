#include<iostream>
#include<ctime>
using namespace std;

/* Ќапишите программу, котора€ заполн€ет массив случайными числами.
   ¬се числа в массиве должны быть уникальными. */
   /* Write a program that fills an array with random numbers.
	All numbers in the array must be unique. */

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	const int SIZE = 20;
	int arr[SIZE];

	bool alreadyThere;

	for (int i = 0; i < SIZE;)
	{
		alreadyThere = false;
		int newvalue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newvalue)
			{
				alreadyThere = true;
				break;
			}
		}
		if (alreadyThere != true)
		{
			arr[i] = newvalue;
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
}