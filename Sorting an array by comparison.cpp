#include<iostream>
using namespace std;


int main()
{
	int c;
	int const size = 7;
	int arr[size]{ 2,6,8,-4,-6,1,7 };

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;

	for (int i = 0; i < size - 1; i++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				c = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = c;
			}

			else
			{
				continue;
			}
		}
	}

	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
	return 0;
}