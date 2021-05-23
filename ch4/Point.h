#pragma once

class Point
{
private:
	int mX;
	int mY;

public:
	bool InitMembers(int xPos, int yPos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xPos);
	bool SetY(int yPos);
};