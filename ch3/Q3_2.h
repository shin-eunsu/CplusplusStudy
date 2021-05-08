#pragma once

int Q3_2Main(void);

class Calculator
{
public:
	Calculator();
	Calculator(double val1, double val2);
	double Add(double val1, double val2);
	double Min(double val1, double val2);
	double Mul(double val1, double val2);
	double Div(double val1, double val2);

	void ShowOpCount();

private:
	double mVal1;
	double mVal2;
	int mAddCnt;
	int mMinCnt;
	int mMulCnt;
	int mDivCnt;
};