#pragma once

class Point
{
private:
	int mxPos, myPos;

public:
	void init(int x, int y);
	void ShowPointInfo() const;
	int qGetX() const;
	int qGetY() const;
};

//원 중심좌표, 반지름 저장 및 출력
class Circle
{
private:
	Point mPoint;
	int mRadius;

public:
	void Init(Point point, int radius);
	void ShowCircleInfo() const;
	Point GetPoint() const;
	int GetRadius() const;	
};

//바깥원, 안쪽원
//두께가 같은링, 다른링
class Ring
{
private:
	Point mPoint1;
	Point mPoint2;
	Circle mCircle1;
	Circle mCircle2;

public:
	void Init(int x1, int y1, int radius1, int x2, int y2, int radius2);
	void ShowRingInfo() const;
};

int Q4_2Main(void);
