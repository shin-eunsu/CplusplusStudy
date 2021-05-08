#include <iostream>
#include "ch3.h"

using namespace std;

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point& pos)
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void ShowPostion()
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

int Q3_1Main(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPostion();	// [5,14] 출력

	pos1.AddPoint(pos2);
	pos1.ShowPostion(); // [25, 44] 출력

 	return 0;
}

