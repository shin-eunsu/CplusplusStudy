#include <iostream>
//#include <cstring>

using namespace std;

class Person
{
private:
	char* mName;
	int mAge;

public:
	Person(const char* myName, int myAge)
	{
		rsize_t len = strlen(myName) + 1;
		mName = new char[len];
		strcpy_s(mName, len, myName);
		mAge = myAge;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << mName << endl;
		cout << "나이: " << mAge << endl;
	}

	~Person()
	{
		delete[] mName;
		cout << "called destructor" << endl;
	}
};

int Destructor_Main()
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}