#include <iostream>
#include<string>
using namespace std;

/*
�������� ���������, ������� ����� ���������� ����� (integer) � ������.
������� (���� -> �����):
123  --> "123"
999  --> "999"
-100 --> "-100"
*/
/* Write a program that can convert a number (integer) to a string.
Examples (input -> output):
123 --> "123"
999 --> "999"
-100 --> "-100"
*/

int main()
{
	int a;
	cin >> a;
	string b = to_string(a);
	cout << b << endl;

	return 0;
}