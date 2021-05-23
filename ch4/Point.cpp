#include <iostream>
#include "Point.h"

using namespace std;

bool Point::InitMembers(int xPos, int yPos)
{
	if (xPos < 0 || yPos < 0)
	{
		cout << "out of range" << endl;
		return false;
	}

	mX = xPos;
	mY = yPos;
	return true;
}

int Point::GetX() const
{
	return mX;
}

int Point::GetY() const
{
	return mY;
}

bool Point::SetX(int xPos)
{
	if (xPos < 0 || xPos > 100)
	{
		cout << "out of range" << endl;
		return false;
	}
	mX = xPos;
	return true;
}

bool Point::SetY(int yPos)
{
	if (yPos < 0 || yPos > 100)
	{
		cout << "out of range" << endl;
		return false;
	}
	mY = yPos;
	return true;
}

