#include <iostream>
#include "ch1.h"

using namespace std;

int HelloWorld()
{
	int num = 20;
	cout << "Hello World" << endl;
	cout << "Hello " << "World" << endl;
	cout << num << ' ' << 'A';

	return 0;
}

int SimpleAdder()
{
	int val1;
	cout << "ù ��° �����Է�: ";
	cin >> val1;

	int val2;
	cout << "�� ��° �����Է�: ";
	cin >> val2;

	int result = val1 + val2;
	cout << "������� : " << result << endl;

	return 0;
}

