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
	cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;

	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl;
}

int RectangleMain(void)
{
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
	{
		cout << "초기화 실패1" << endl;
	}
	if (!pos1.InitMembers(2, 4))
	{
		cout << "초기화 실패2" << endl;
	}

	Point pos2;
	if (!pos2.InitMembers(5, 9))
	{
		cout << "초기화 실패" << endl;
	}

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
	{
		cout << "직사각형 초기화 실패1" << endl;
	}

	if (!rec.InitMembers(pos1, pos2))
	{
		cout << "직사각형 초기화 실패2" << endl;
	}

	rec.ShowRecInfo();

	return 0;
}