#include <iostream>

using namespace std;

class SoBase2
{
private:
	int mBaseNum;

public:
	SoBase2(int n)
		: mBaseNum(n)
	{
		cout << "SoBase2(): " << mBaseNum << endl;
	}

	~SoBase2()
	{
		cout << "~SoBase2(): " << mBaseNum << endl;
	}
};

class SoDerived2 : public SoBase2
{
private:
	int mDerivNum;

public:
	SoDerived2(int n)
		: SoBase2(n)
		, mDerivNum(n)
	{
		cout << "SoDerived2() : " << mDerivNum << endl;
	}

	~SoDerived2()
	{
		cout << "~SoDerived2() : " << mDerivNum << endl;
	}
};

int DerivDestOrder_Main()
{
	SoDerived2 d1(15);
	SoDerived2 d2(27);

	return 0;
}