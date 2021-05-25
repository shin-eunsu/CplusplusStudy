#include <iostream>
#include "Q4_2.h"

using namespace std;

#pragma region Class Point
void Point::init(int x, int y)
{
	mxPos = x;
	myPos = y;
}

void Point::ShowPointInfo() const
{
	cout << "[" << mxPos << ", " << myPos << "]" << endl;
}

int Point::qGetX() const
{
	return mxPos;
}

int Point::qGetY() const
{
	return myPos;
}
#pragma endregion


#pragma region Class Circle
void Circle::Init(Point point, int radius)
{
	mPoint = point;
	mRadius = radius;
}

void Circle::ShowCircleInfo() const
{
	cout << "Circle Info..." << endl;
	cout << "radius: " << mRadius << endl;
	cout << "[" << mPoint.qGetX() << ", " << mPoint.qGetY() << "]" << endl;
}

Point Circle::GetPoint() const
{
	return mPoint;
}

int Circle::GetRadius() const
{
	return mRadius;
}

#pragma endregion


#pragma region Class Ring

void Ring::Init(int x1, int y1, int radius1, int x2, int y2, int radius2)
{	
	mPoint1.init(x1, y1);
	mPoint2.init(x2, y2);
	mCircle1.Init(mPoint1, radius1);
	mCircle2.Init(mPoint2, radius2);
}

void Ring::ShowRingInfo() const
{
	Circle innerCircle;
	Circle outterCircle;

	if (mCircle1.GetRadius() > mCircle2.GetRadius())
	{
		innerCircle = mCircle2;
		outterCircle = mCircle1;
	}
	else
	{
		innerCircle = mCircle1;
		outterCircle = mCircle2;
	}

	cout << "Inner ";
	innerCircle.ShowCircleInfo();
	cout << "Outter ";
	outterCircle.ShowCircleInfo();
}

#pragma endregion



int Q4_2Main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}