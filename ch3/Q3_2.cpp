#include <iostream>
#include "Q3_2.h"

using namespace std;

int Q3_2Main(void)
{
	Calculator cal;
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "5.2 - 1.1 = " << cal.Min(5.2, 1.1) << endl;
	cout << "4.9 * 1.2 - " << cal.Mul(4.9, 1.2) << endl;
	cal.ShowOpCount();

	return 0;
}

Calculator::Calculator()
	: Calculator(0, 0)
{
}

Calculator::Calculator(double val1, double val2)
	: mVal1(val1)
	, mVal2(val2)
	, mAddCnt(0), mMinCnt(0), mMulCnt(0), mDivCnt(0)
{
}

double Calculator::Add(double val1, double val2)
{
	mAddCnt++;
	return val1 + val2;
}

double Calculator::Min(double val1, double val2)
{
	mMinCnt++;
	return val1 - val2;
}

double Calculator::Mul(double val1, double val2)
{
	mMulCnt++;
	return val1 * val2;
}

double Calculator::Div(double val1, double val2)
{
	mDivCnt++;
	return val1 / val2;
}

void Calculator::ShowOpCount()
{
	cout << "Add: " << mAddCnt << " Min: " << mMinCnt << " Mul: " << mMulCnt << " Div: " << mDivCnt << endl;
}
