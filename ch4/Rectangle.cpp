#include <iostream>
#include "Rectangle.h"

using namespace std;

bool Rectangle::InitMembers(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "Invalid input" << endl;
		return false;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ���: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;

	cout << "�� �ϴ�: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl;
}

int RectangleMain(void)
{
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
	{
		cout << "�ʱ�ȭ ����1" << endl;
	}
	if (!pos1.InitMembers(2, 4))
	{
		cout << "�ʱ�ȭ ����2" << endl;
	}

	Point pos2;
	if (!pos2.InitMembers(5, 9))
	{
		cout << "�ʱ�ȭ ����" << endl;
	}

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
	{
		cout << "���簢�� �ʱ�ȭ ����1" << endl;
	}

	if (!rec.InitMembers(pos1, pos2))
	{
		cout << "���簢�� �ʱ�ȭ ����2" << endl;
	}

	rec.ShowRecInfo();

	return 0;
}