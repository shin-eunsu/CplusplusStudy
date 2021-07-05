#include <iostream>

using namespace std;

class F
{
public:
	void FFunc()
	{
		cout << "FFunc()" << endl;
	}

	virtual void SimpleFunc()
	{
		cout << "F SimpleFunc()" << endl;
	}
};

class S : public F
{
public:
	void SFunc()
	{
		cout << "SFunc()" << endl;
	}

	virtual void SimpleFunc()
	{
		cout << "S SimpleFunc()" << endl;
	}
};

class T : public S
{
public:
	void TFunc()
	{
		cout << "SFunc()" << endl;
	}

	virtual void SimpleFunc()
	{
		cout << "T SimpleFunc()" << endl;
	}
};

int ReferenceAttributeMain()
{
	T obj;
	obj.FFunc();
	obj.SFunc();
	obj.TFunc();
	obj.SimpleFunc();

	S& sref = obj;
	sref.FFunc();
	sref.SFunc();
	sref.SimpleFunc();

	F& fref = obj;
	fref.FFunc();
	fref.SimpleFunc();

	return 0;
}