#include <iostream>

using namespace std;

class Point
{
public:
	int mX;
	int mY;
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "�� ���: " << '[' << upLeft.mX << ", ";
		cout << upLeft.mY << ']' << endl;
		cout << "�� �ϴ�: " << '[' << lowRight.mX << ", ";
		cout << lowRight.mY << ']' << endl << endl;
	}
};

int RectangleFaultMain()
{
	Point pos1 = { -2, 4 };
	Point pos2 = { 5, 9 };
	Rectangle rec = { pos2, pos1 };
	rec.ShowRecInfo();

	return 0;
}