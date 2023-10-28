#include<iostream>
using namespace std;

/*
Напишите программу, которая проверяет, является ли a множителем b.
О факторах
Множители - это числа, которые вы можете умножить друг на друга, чтобы получить другое число.
2 и 3 являются множителями 6, потому что: 2 * 3 = 6
Вы можете найти множитель, разделив числа. Если остаток равен 0, то число является множителем.
Вы можете использовать оператор mod (%) в большинстве языков для проверки остатка
Например, 2 не является коэффициентом 7, потому что: 7 % 2 = 1
*/
/*
Write a program that checks if a is a multiplier of b.
About the factors
Multipliers are numbers that you can multiply by each other to get another number.
2 and 3 are multipliers of 6 because: 2 * 3 = 6
You can find the multiplier by dividing the numbers. If the remainder is 0, then the number is a multiplier.
You can use the mod (%) operator in most languages to check the remainder
For example, 2 is not a coefficient of 7 because: 7 % 2 = 1
*/

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cin >> b;
	cin >> a;
	bool(c) = true;
	c = b % a == 0;

	if (c)
	{
		cout << "Множитель" << endl;
	}
	else
	{
		cout << "Не множитель" << endl;
	}
	return 0;
}
