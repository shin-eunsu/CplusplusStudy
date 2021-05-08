#include <iostream>

using namespace std;

//문제02-1
// 
//1)
//참조자를 이용해서 다음 요구사항에 부합하는 함수는 각각 정의하여라.
// > 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
// > 인자로 전달된 int형 변수의 부호를 바꾸는 함수
int plusValue(int& val)
{
	return val + 1;
}

int changeSign(int& val)
{
	return val * (-1);
}

int Q02_1_1_main()
{
	int inputVal;
	cout << "Input number: ";;
	cin >> inputVal;

	cout << plusValue(inputVal) << endl;
	cout << changeSign(inputVal) << endl;

	return 0;
}

//3)

void SwapPointer(int* val1, int* val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int Q02_1_3_main()
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}

//p90
//02_2_1
// const int num = 12;
// 1.포인터 변수를 선언해서 위 변수를 가리키게.
// 2.이 포인터 변수를 참조하는 참조라를 하나 선언.
// 3.포인터 변수와 참조자를 이용해서 num에 저장된 값을 출력.
int Q02_2_1()
{
	const int num = 12;
	const int* ptr = &num; // 1.
	const int* (&ref) = ptr; // 2.

	cout << "num: " << num << endl;
	cout << "ptr: " << ptr << endl;
	cout << "ref: " << ref << endl;

	return 0;
}


//p95
//02_3_1
	
typedef struct __Point
{
	int xpos;
	int ypos;
} Point;
//위 구조체를 기반으로 두 점의 합을 계산하는 함수를 다음의 형태로 정의하고
Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pi = new Point;
	pi->xpos = p1.xpos + p2.xpos;
	pi->ypos = p1.ypos + p2.ypos;

	return *pi;
}

//임의의 두 점을 선언하여, 위 함수를 이용한 덧셈연산을 진행하는 main 함수를 정의해 보자.
//구조체 Point 관련 변수의 선언은 무조건 new 연산자를 이용
int Q02_3_1()
{
	int x1 = 10;
	int y1 = 400;

	int x2 = 50;
	int y2 = 50;

	Point* p1 = new Point;
	p1->xpos = x1;
	p1->ypos = y1;

	Point* p2 = new Point;
	p2->xpos = x2;
	p2->ypos = y2;

	Point& pref = PntAdder(*p1, *p2);
	cout << "x: " << pref.xpos << endl;
	cout << "y: " << pref.ypos << endl;

	delete p1;
	delete p2;
	delete &pref;
		
	return 0;
}
