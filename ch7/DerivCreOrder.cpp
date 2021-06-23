#include <iostream>

using namespace std;

class SoBase
{
private:
	int mBaseNum;

public:
	SoBase()
		: mBaseNum(20)
	{
		cout << "SoBase()" << endl;
	}

	SoBase(int n)
		: mBaseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}

	void ShowBaseData()
	{
		cout << mBaseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int mDerivNum;

public:
	SoDerived()
		: mDerivNum(30)
	{
		cout << "SoDerived()" << endl;
	}

	SoDerived(int n)
		: mDerivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}

	SoDerived(int n1, int n2)
		: SoBase(n1)
		, mDerivNum(n2)
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}

	void ShowDerivData()
	{
		ShowBaseData();
		cout << mDerivNum << endl;
	}
};

int DerivCreOrder_Main()
{
	cout << "case1" << endl;
	SoDerived dr1;
	dr1.ShowDerivData();
	cout << "-----------------" << endl;
	cout << "case2" << endl;
	SoDerived dr2(12);
	dr2.ShowDerivData();
	cout << "-----------------" << endl;
	cout << "case3" << endl;
	SoDerived dr3(23, 24);
	dr3.ShowDerivData();

	return 0;
}