#include <iostream>
#include "ch1.h"

using namespace std;

//01-1 입출력 방식
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

int BetweenAdder()
{
	int val1, val2;
	int result = 0;
	cout << "두 개의 숫자입력: ";
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

	cout << "두 수 사이의 정수 합 : " << result << endl;

	return 0;
}

int StringIO()
{
	char name[100];
	char lang[200];

	cout << "이름은? ";
	cin >> name;

	cout << "좋아하는 프로그래밍 언어는? ";
	cin >> lang;

	cout << "내 이름은 " << name << "입니다.\n";
	cout << "제일 좋아하는 언어는 " << lang << "입니다." << endl;

	return 0;
}

//01-2 함수 오버로딩
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

//01-3 매개변수의 디폴트 값
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

//01-4 Inline 함수
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
	cout << "bc에서 정의한 함수" << endl;
}

void pc::Func(void)
{
	cout << "pc에서 정의한 함수" << endl;
}

