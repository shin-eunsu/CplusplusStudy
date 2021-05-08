#include <iostream>
#include "Q3_2_2.h"

using namespace std;

int Q3_2_2Main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love c++");
	pnt.ShowString();

	return 0;
}

Printer::Printer()
	: mSize(0), mString()
{
}

Printer::~Printer()
{
	delete[] mString;
}

Printer::Printer(const char* str)
	: mSize(strlen(str) + 1)
{
	mString = new char[mSize];
	memcpy(mString, str, mSize);
}

Printer::Printer(const Printer& str)
	: mSize(str.mSize)
{
	mString = new char[mSize];
	memcpy(mString, str.mString, mSize);
}

void Printer::SetString(const char* str)
{
	mSize = strlen(str) + 1;
	mString = new char[mSize];
	memcpy(mString, str, mSize);
}

void Printer::ShowString()
{
	cout << mString << endl;
}