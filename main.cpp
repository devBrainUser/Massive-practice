#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");

	char arr[4]; // make a massive

	cout << "Напишите 1-ую букву:";
	cin >> arr[0]; // asking user

	cout << "Напишите 2-ую букву:";
	cin >> arr[1]; // asking user

	cout << "Напишите 3-ую букву:";
	cin >> arr[2]; // asking user

	cout << "Напишите 4-ую букву:";
	cin >> arr[3]; // asking user

	cout << "Ваше слово:" << arr[0] << arr[1] << arr[2] << arr[3] << endl; // printing word
}