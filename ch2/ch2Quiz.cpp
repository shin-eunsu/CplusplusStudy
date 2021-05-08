#include <iostream>

using namespace std;

//����02-1
// 
//1)
//�����ڸ� �̿��ؼ� ���� �䱸���׿� �����ϴ� �Լ��� ���� �����Ͽ���.
// > ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
// > ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
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
// 1.������ ������ �����ؼ� �� ������ ����Ű��.
// 2.�� ������ ������ �����ϴ� ������ �ϳ� ����.
// 3.������ ������ �����ڸ� �̿��ؼ� num�� ����� ���� ���.
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
//�� ����ü�� ������� �� ���� ���� ����ϴ� �Լ��� ������ ���·� �����ϰ�
Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pi = new Point;
	pi->xpos = p1.xpos + p2.xpos;
	pi->ypos = p1.ypos + p2.ypos;

	return *pi;
}

//������ �� ���� �����Ͽ�, �� �Լ��� �̿��� ���������� �����ϴ� main �Լ��� ������ ����.
//����ü Point ���� ������ ������ ������ new �����ڸ� �̿�
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
