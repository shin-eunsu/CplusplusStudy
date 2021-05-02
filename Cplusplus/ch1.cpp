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
	cout << "첫 번째 숫자입력: ";
	cin >> val1;

	int val2;
	cout << "두 번째 숫자입력: ";
	cin >> val2;

	int result = val1 + val2;
	cout << "덧셈결과 : " << result << endl;

	return 0;
}

