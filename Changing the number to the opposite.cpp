#include<iostream>
using namespace std;

/* Напишите программу, которая меняет значение всех элементов массива на противоположное.
Каждое положительное значение становится отрицательным,
а отрицательные значения становятся положительными. */
/*
Write a program that changes the value of all elements of the array to the opposite.
Every positive value becomes negative,
and negative values become positive.
*/

int main()
{
	setlocale(LC_ALL, "ru");
	int arr[]{ 1,4,-6,7,-8,1 };

	for (int i = 0; i < 6; i++)
	{
		arr[i] = -arr[i];

	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;

}