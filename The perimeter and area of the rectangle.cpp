#include<iostream>
using namespace std;

/* Напишите программу, которая выводит на экран площадь или периметр прямоугольника.
   Если стороны прямоугольника равны, то площадь, если не равны, то периметр.  */
   /* Write a program that displays the area or perimeter of a rectangle.
	If the sides of the rectangle are equal, then the area, if not equal, then the perimeter. */

int main()
{
	int a, b, d;
	cin >> a;
	cin >> b;

	if (a == b)
	{
		cout << a * b << endl;
	}
	else
	{
		d = 2 * (a + b);
		cout << d << endl;
	}
	return 0;
}
