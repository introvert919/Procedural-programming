#include<iostream>
using namespace std;

/*
�������� ���������, ������� ������� ������ ����� ����� �� n �� 1, ��� n>0.
������ : n=5 --> [5,4,3,2,1]
*/
/* Write a program that creates an array of integers from n to 1, where n>0.
Example : n=5 --> [5,4,3,2,1] */

int main()
{
	int a = 1;
	const int size = 20;
	int arr[size]{};
	arr[0] = size;

	for (int i = 1; i < size; i++)
	{
		arr[i] = arr[0] - (a++);
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}