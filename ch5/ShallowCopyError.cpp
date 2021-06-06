#include <iostream>
#include <cstring>

using namespace std;

namespace ShallowCopyError
{
	class Person
	{
	private:
		char* name;
		int age;

	public:
		Person(const char* myname, int myage)
		{
			int len = strlen(myname) + 1;
			name = new char[len];
			strcpy_s(name, len, myname);
			age = myage;
		}

		Person(const Person& rhs)
			: age(rhs.age)
		{
			int len = strlen(rhs.name) + 1;
			name = new char[len];
			strcpy_s(name, len, rhs.name);
		}

		void ShowPersonInfo() const
		{
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}

		~Person()
		{
			delete[] name;
			cout << "called destructor" << endl;
		}
	};

	void ShallowCopyError_Main()
	{
		Person man1("Lee Dong woo", 29);
		Person man2 = man1;
		man1.ShowPersonInfo();
		man2.ShowPersonInfo();
	}
}