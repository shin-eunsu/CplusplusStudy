#pragma once

class Point
{
private:
	int mX;
	int mY;

public:
	Point();
	Point(const int& xPos, const int& yPos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xPos);
	bool SetY(int yPos);
};