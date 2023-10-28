#include<iostream>;
using namespace std;

/* Напишите программу, которая считает сумму нечетных чисел в массиве. */
/* Write a program that counts the sum of odd numbers in an array. */

int main()
{
	setlocale(LC_ALL, "RUS");

	int aver1, aver2;

	cout << "Ââåäèòå íàëàëî äèàïàçîíà ÷èñåë" << endl;
	cin >> aver1;
	cout << "Ââåäèòå êîíêö äèàïàçîíà ÷èñåë" << endl;
	cin >> aver2;

	int sum = 0;
	do
	{
		if (aver1 % 2 != 0)
		{
			sum = sum + aver1;
		}
		aver1++;
	} while (aver1 <= aver2);
	cout << "Ñóììà íå÷åòíûõ ÷èñåë ðàâíà =" << sum;
}
