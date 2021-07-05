#include <iostream>

using namespace std;

class First2
{
private:
	char* strOne;

public:
	First2(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}

	virtual ~First2()
	{
		cout << "~First2()" << endl;
		delete[] strOne;
	}
};

class Second2 : public First2
{
private:
	char* strTwo;

public:
	Second2(const char* str1, const char* str2)
		: First2(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}

	virtual ~Second2()
	{
		cout << "~Second2()" << endl;
		delete[] strTwo;
	}
};

int VirtualDestructorMain()
{
	First2* ptr = new Second2("simple", "complex");
	delete ptr;

	return 0;
}