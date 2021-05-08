#include <iostream>
#include "ch1.h"

using namespace std;

//01-1 ����� ���
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

int BetweenAdder()
{
	int val1, val2;
	int result = 0;
	cout << "�� ���� �����Է�: ";
	cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	cout << "�� �� ������ ���� �� : " << result << endl;

	return 0;
}

int StringIO()
{
	char name[100];
	char lang[200];

	cout << "�̸���? ";
	cin >> name;

	cout << "�����ϴ� ���α׷��� ����? ";
	cin >> lang;

	cout << "�� �̸��� " << name << "�Դϴ�.\n";
	cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << endl;

	return 0;
}

//01-2 �Լ� �����ε�
void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int FunctionOverloading()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}

//01-3 �Ű������� ����Ʈ ��
int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int DefaultValue1()
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;

	return 0;
}

int BoxVolume(int length, int width = 1, int height = 1);

int DefaultValue3()
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	//cout << "[D, D, D] : " << BoxVolume() << endl;

	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

//01-4 Inline �Լ�
template <typename T>
inline T SQUARE(T x)
{
	return x * x;
}

int InlineFunc()
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
	cout << SQUARE(1.5) << endl;

	return 0;
}

//01-5 namespace
namespace bc
{
	void Func(void);
}

namespace pc
{
	void Func(void);
}

int nameSp()
{
	bc::Func();
	pc::Func();
	return 0;
}

void bc::Func(void)
{
	cout << "bc���� ������ �Լ�" << endl;
}

void pc::Func(void)
{
	cout << "pc���� ������ �Լ�" << endl;
}

