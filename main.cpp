#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");

	char arr[4]; // make a massive

	cout << "�������� 1-�� �����:";
	cin >> arr[0]; // asking user

	cout << "�������� 2-�� �����:";
	cin >> arr[1]; // asking user

	cout << "�������� 3-�� �����:";
	cin >> arr[2]; // asking user

	cout << "�������� 4-�� �����:";
	cin >> arr[3]; // asking user

	cout << "���� �����:" << arr[0] << arr[1] << arr[2] << arr[3] << endl; // printing word
}