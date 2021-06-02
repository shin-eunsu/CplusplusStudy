#include <iostream>

using namespace std;

class AAA
{
private:
	int num;
	AAA(int n)
		: num(n)
	{
	}

public:
	AAA()
		:num(0)
	{
	}

	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n); 
		return* ptr;
	}

	void ShowNum() const
	{
		cout << num << endl;
	}
};


int PrivateConstrutor_Main()
{
	AAA base;
	base.ShowNum(); //0

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum(); //3

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum(); //12

	delete& obj1;
	delete& obj2;

	return 0;
}