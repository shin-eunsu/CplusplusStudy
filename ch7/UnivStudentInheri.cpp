#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	int mAge;
	char mName[50];

public:
	Person(int age, const char* name)
		: mAge(age)
	{
		strcpy_s(mName, strlen(name) + 1, name);
	}

	void WhatYourName() const
	{
		cout << "My name is " << mName << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << mAge << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char mMajor[50];

public:
	UnivStudent(const char* name, int age, const char* major)
		: Person(age, name)
	{
		strcpy_s(mMajor, strlen(major) + 1, major);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << mMajor << endl << endl;
	}
};

int UnivStudentInheri_Main()
{
	UnivStudent std1("Lee", 22, "Computer eng");
	std1.WhoAreYou();

	UnivStudent std2("Yoon", 21, "Ele");
	std2.WhoAreYou();

	return 0;
}